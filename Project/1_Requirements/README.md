# 1. Water Tank Pumping System

## 1.1 Introduction
* This Project is about Water Tank Pumping System. This System helps to prevent the wastage of water resources and to control the water tanks from overflow. Considering the aspect of comfort zones and the prevention of wastage of water resources, this project was proposed. This project will detect that water is low in the tank and it will automatically start the motor and switch off the motor when the tank gets filled. This project will save water as well as electricity.

## 1.2 Components Used:
| ID | Component Name | Description |
| --- | --- | --- |
| `C_01` | Relay | Relay is a electric switche that use electromagnetism to convert small electrical stimuli into larger currents. |
| `C_02` | Atmega 328 Microcontroller | Performs all of the operations that our system requires. |
| `C_03` | DC Motor | DC Motor is used to pump the water into the tank |
| `C_04` | Switch | Here the switches work as the water level sensors. So, it turns on/off according to the water level in the tank |
| `C_05` | Power Supply | All the devices, switches and the Arduino is powered by a power supply. |

## 1.3 Cost and Features 
The cost for implementing this project is minimal
### 1.3.1 Features
* It Switch off the motor automatically
* It Doesn't require any manpower to switch off the motor 
* It avoids wastage of water  
## 1.4 SWOT ANALYSIS
## 4W&#39;s and 1&#39;H
## Who
People turn on their motor and forget to switch it off, which causes wastage of water and electricity due to overflowing of water tank
## What
Human needs the water in almost all daily activities such as washing, cleaning, taking a bath, the irrigation, and the industry needs.
## When
Person need to be present on that specific time to switch on their water pumps and store water in their water storage tank
## Where
This can be used in Apartments,House,Storage tanks.
## How

## 1.5 Applications
* This system can be used in our homes and industries.
* 
## 2. Detail requirements
## High Level Requirements
| ID | Description | Category | Status |
| --- | --- | --- | --- |
| HR01 |It should turn off the motor when the tank is full | Technical | IMPLEMENTED |
| HR02 | It must turn on the motor when the water reaches the bottom level sensor | Technical |  IMPLEMENTED |
| HR03 | It must prevent the overflow of water | Technical |  IMPLEMENTED |
## Low level Requirements
- Avoid overflow of water from the tank. 
| ID | Description | HLR ID | Status |
| --- | --- | --- | --- |
| LR01 | If the bottom level switch is open before the upper level switch the water won't flow | HR02 | IMPLEMENTED |
| LR02 | The Relay module should work as an aoutomatic switch | HR02 | IMPLEMENTED |
| LR03 | It should turn on the motor when both water level sensors are open | HR02 |  IMPLEMENTED |
| LR04 | It should turn on the motor when the upper level sensor is open and bottom level is closed  | HR02 | IMPLEMENTED |
