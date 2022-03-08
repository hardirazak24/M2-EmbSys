# 1. Water Tank Pumping System

## 1.1 Introduction
* This Project is about Water Tank Pumping System. This System helps to prevent the wastage of water resources and to control the water tanks from overflow. Considering the aspect of comfort zones and the prevention of wastage of water resources, this project was proposed. This project will detect that water is low in the tank and it will automatically start the motor and switch off the motor when the tank gets filled. This project will save water as well as electricity.

## 1.2 Cost and Features 
The cost for implementing this project is minimal
### 1.2.1 Features
* It Switch off the motor automatically
* It Doesn't require any manpower to switch off the motor 
* It avoids wastage of water 
*  
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

# Block Diagram
![BlockDiagramM2](https://user-images.githubusercontent.com/73360521/157181338-a65e064d-0e3f-44f8-9a7c-fed9e4bce828.png)

# Structural Diagram
## Flow Chart
![FlowchartM2 (1)](https://user-images.githubusercontent.com/73360521/157192230-6db01829-b7e5-4a57-bc03-30550afea61b.png)

# Behavioural Diagram
## Component Diagram
![BDM2](https://user-images.githubusercontent.com/73360521/157194357-010915ec-ad56-49e3-af4f-5252bbb4cd2e.png)

# TEST PLAN AND OUTPUT
## Table no - High level test plan
| **Test ID** | **Description** | **EXP I/P** | **EXP O/P** | STATUS | Type of Test | 
|---|---|---|---|---|---|
| H_01 | Should turn OFF the water pump when the water reaches the Top float Sensor | Turn off pump | Turn Off pump | PASS | Technical |
| H_02 | Should turn ON the water pump when the water reaches the bottom float Sensor | Turn on pump | Turn on pump | PASS | Technical |

## Table no - Low level test plan
| **Test ID** | **Description** | **EXP I/P** | **EXP O/P** | STATUS | Type of Test |      
|---|---|---|---|---|---|
| L_01 | Turn ON the water pump when both the switches are open | Turn ON Motor | Turn ON Motor | PASS | Technical |
| L_02 | Turn ON the water pump when top switch is open and bottom switch is closed | Turn ON Motor | Turn ON Motor | PASS | Technical |
| L_03 | Turn OFF the water pump when both the switches are closed | Turn OFF Motor | Turn OFF Motor | PASS | Technical |

# Simulation
## When both the switches are open : Water will be Pumped to tank
![Turn ON](https://user-images.githubusercontent.com/73360521/157276621-05c192a1-dcc0-46d5-8669-bbc4027c8508.png)
## When both the switches are closed : Water will not be Pumped to tank
![Turn off](https://user-images.githubusercontent.com/73360521/157276709-a34eace0-5b6a-49a0-b9de-cbbca7c13345.png)
## When top level switch is open and bottom level is closed : Water will be Pumped to tank
![Screenshot (416)](https://user-images.githubusercontent.com/73360521/157276893-06343c53-6f17-409a-a353-f05684fd9656.png)
## When top level switch is closed and bottom level is opened : Water will not be Pumped to tank
![Screenshot (417)](https://user-images.githubusercontent.com/73360521/157277148-b1e0d7ce-5e7c-4f4a-b731-08bfa5274e17.png)
