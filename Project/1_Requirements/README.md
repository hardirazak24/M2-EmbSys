# 1. Water Tank Pumping System

## 1.1 Introduction
* This Project is about Water Tank Pumping System. This System helps to prevent the wastage of water resources and to control the water tanks from overflow. Considering the aspect of comfort zones and the prevention of wastage of water resources, this project was proposed. This project will detect that water is low in the tank and it will automatically start the motor and switch off the motor when the tank gets filled. This project will save water as well as electricity.

## 1.2 Cost and Features 
The cost for implementing this project is minimal
### 1.2.1 Features
* It Switch off the motor automatically
* It Doesn't require any manpower to switch off the motor 
* It avoids wastage of water 
## 1.3 SWOT ANALYSIS
![Swot_Analysis_M2](https://user-images.githubusercontent.com/73360521/157111558-775f6236-691f-4f79-8d7d-62090b152d64.png)

## 1.4 5W's and 1H
![5W's and 1H](https://user-images.githubusercontent.com/73360521/157164100-cc856a40-2408-4623-a4de-fb2c6fbdbd15.png)

## 1.5 Components Used:
| ID | Component Name | Description |
| --- | --- | --- |
| `C_01` | Relay | Relay is a electric switche that use electromagnetism to convert small electrical stimuli into larger currents. |
| `C_02` | Atmega 328 Microcontroller | Performs all of the operations that our system requires. |
| `C_03` | DC Motor | DC Motor is used to pump the water into the tank |
| `C_04` | Switch | Here the switches work as the water level sensors. So, it turns on/off according to the water level in the tank |
| `C_05` | Power Supply | All the devices, switches and the Arduino is powered by a power supply. |

## 1.6 Applications
* This system can be used in our homes and industries.
# 2. Detail requirements
## 2.1 High Level Requirements
| ID | Description | Category | Status |
| --- | --- | --- | --- |
| HR01 |It should turn off the motor when the tank is full | Technical | IMPLEMENTED |
| HR02 | It must turn on the motor when the water reaches the bottom level sensor | Technical |  IMPLEMENTED |
| HR03 | It must prevent the overflow of water | Technical |  IMPLEMENTED |
## 2.2 Low level Requirements
| ID | Description | HLR ID | Status |
| --- | --- | --- | --- |
| LR01 | If the bottom level switch is open before the upper level switch the water won't flow | HR02 | IMPLEMENTED |
| LR02 | The Relay module should work as an aoutomatic switch | HR02 | IMPLEMENTED |
| LR03 | It should turn on the motor when both water level sensors are open | HR02 |  IMPLEMENTED |
| LR04 | It should turn on the motor when the upper level sensor is open and bottom level is closed  | HR02 | IMPLEMENTED |
