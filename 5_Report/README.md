# **INTRODUCTION**
* In this project, we will be interfacing 4 channel relay with NodeMCU ESP8266 12E Wifi Module and control 4 different LEDs. 
* These 4 different LEDs are similar to 4 different Home Appliances. We will use an Android app having 5+5 ON+OFF Buttons to send a signal to NodeMCU in order to control relay output. Every NodeMCU has a particular IP Address. 
* We will assign this IP Address to Android App for access control. Similarly, NodeMCU is needed to be connected to local Wifi.

# **FEATURES**
* Interoperability-The beauty of an automation system is its ability to tie diverse electronic devices together so they can perform as one unified system. 
* Expandability-The way you live in your home five years from now will probably be much different than the way you live in your home today. Moreover, technology will continue to evolve, introducing a completely new generation of products to the marketplace.
* Energy Management-One of the hottest topics in the consumer media is energy conservation. Automation systems can help save energy by turning off electronic devices automatically, and some do this better than others. Be sure to check out the energy-saving features of a system before you buy. 

# **SWOT ANALYSIS**
![SWOT](https://user-images.githubusercontent.com/94214304/143998536-cad55d91-51e1-4046-beb1-a368ba0c103f.png)

# **STATE OF ARTS**
* The technology as changed to access the home applicances from where we are and controls the electricity.
![state of art](https://user-images.githubusercontent.com/94214304/143998860-72401541-122b-49ae-a0e7-7f89379169cb.jpg)

# **4W's AND 1H's**
# WHERE
* The most common applications of home automation are lighting control, HVAC, outdoor lawn irrigation, kitchen appliances, and security systems.
# WHY
* Home automation technologies such as smart thermostats, smart lighting, and smart appliances connect to a centralized control that can act on its own or be programmed to control energy consumption and increase savings.
# WHAT
* Home Automation system is a system that uses computers or mobile devices to control basic home functions and features automatically through internet from anywhere around the world
# HOW
* Home automation is a network of hardware, communication, and electronic interfaces that work to integrate everyday devices with one another via the Internet.

# **HIGH LEVEL REQUIREMENT**
* NodeMCU-send the message to web page
* ADC-converts analog to digital 
* Temperature and humidity sensor-detects the values
* Relay Module-switiching ON/OFF

# **LOW LEVEL REQUIREMENT**
* LCD-display message
* Breadboard-connects the circuits

# **CLASS DIAGRAM**
![36977df1bf8bfcc452fd4de205c707da](https://user-images.githubusercontent.com/94214304/144003556-f25dc816-e5a2-4fa2-800e-b02e4248c5ab.png)
# **CIRCUIT DIAGRAM**
![Circuit-Diagram-797x420](https://user-images.githubusercontent.com/94214304/144000513-79bc3f52-b605-4bad-8cdb-39341ee2b396.jpg)
# **FLOWCHART**
![flowchart](https://user-images.githubusercontent.com/94214304/143999995-1b2f2bd3-650b-42cf-8375-068f41ce3959.jpg)

# **UML DIAGRAM**
![uml dia](https://user-images.githubusercontent.com/94214304/144000856-0a87f194-c112-415d-aa52-c7595c74d1ae.jpg)
![The-Android-App-for-Wifi-Voice-Controlling-768x431](https://user-images.githubusercontent.com/94214304/144001099-70f85112-1c38-4ac0-9b1f-d971b35453e2.jpg)

# **BLOCK DIGRAM**
![block diagram](https://user-images.githubusercontent.com/94214304/144004198-999a560b-a35e-4ecc-963d-91aa8957223f.png)

# **BILLS OF MATERIALS**
| **S.NO** | **COMPONENTS** | **DESCRIPTION** | **QUALITY** | **LINKS** |
| :------: | :------------: | :-------------: | :---------: | :-------: |
|1.        | NodeMCU        | ESP8266-12E Board | 1  | https://amzn.to/2LbvQIa |
|2.        | Relay Module   | 4-Channel 5v NPN Relay module | 1 | https://amzn.to/35TFhFC |
|3.        | LED            | 5mm LED of any Color  | 4 | https://amzn.to/2xWx473 |
|4.        | Resistor       | 220 ohm  | 4 | https://amzn.to/2SYMPSk |
|5.        | Power Supply   | 5v, 1A Power Adapter | 1 | https://amzn.to/3fHd9tL |
|6.        | Connecting Wires | Jumper Wires | 10 | https://amzn.to/2L8Xc1p |
|7.        | Breadboard     | - | 1 | https://amzn.to/2YM6YyS |

# **HIGH LEVEL TESTPLAN**

| **TEST ID** | **DESCRIPTION** | **EXPECTED I/P** | **ACTUAL O/P** | **EXPECTED O/P** |
| :------------:  | :------------------: | :------------------: | :-----------------: | :-------------------: |
| H1               | To monitor room temperature | Temperature sensor sense the value | Message generated to webpage | Message generated to webpage |
| H2               | Switching of lights and fans  | PIR sensor senses the people motion | LED ON/OFF | LED ON/OFF |
| H3               | Sending collected value to webpage | NodeMCU connected to webpage | Webpage is created | Webpage is created |





# **LOW LEVEL TESTPLAN**
| **TEST ID** | **DESCRIPTION** | **EXPECTED I/P** | **ACTUAL O/P** | **EXPECTED O/P** |
| :------------:  | :------------------: | :------------------: | :-----------------: | :-------------------: |
| L1               | To print the value in LCD board | power Supply | Message Generated in LCD | Message generated in LCD |



# **OUTPUT**
![output](https://user-images.githubusercontent.com/94214304/144251165-8d7a53a4-ca09-4d04-99b7-fbdf273dd125.jpg)

