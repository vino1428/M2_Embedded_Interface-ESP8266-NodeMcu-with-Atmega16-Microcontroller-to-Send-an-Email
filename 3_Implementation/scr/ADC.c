#include"adc.h"
#include"NodeMCU.h"
intmain()
{
int adcValue;
int temp;
int fan;
int light;
ADC_Init();       // Initialize the ADC module 
NodeMCU_Init(9600);  // Initialize UART at 9600 baud rate 
while(1){
adcValue = ADC_GetAdcValue(0); // Read the ADC value of channel zero where the temperature sensor is connected
fan = ADC_GetAdcValue(1); // Read the ADC value of Channel one where the Pir sensor is connected
light = ADC_GetAdcValue(1); // Read the ADC value of Channel one where the Pir sensor is connected
temp = adcValue/2.0; // Divide by 2 to get the temp value.
NodeMCU_Printf("ADC0 Value:%4d  Equivalent Temperature:%dC\n\r",adcValue,temp);     // Send the value on NodeMCU
}
return (0);
}
