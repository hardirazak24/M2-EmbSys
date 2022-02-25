# Heat Control System for Vehicle Seat
## Introduction:
The Heat control system is basically used for controlling the temperature of a Vehicle seat. When a person sits on the seat of a car, the button sensor is activated (which is acting as one switch here). After that, the person can turn on/off the heater in the vehicle seat(which is acting as another switch). The temperature sensor keeps monitoring and recording the temperature and sends the analog value to the microcontroller ATmega328. The microcontroller takes the analog input of the temperature sensor and gives output a temperature value through UART( through serial communication).

## Block Diagram:
![Bdiagram](https://user-images.githubusercontent.com/73360521/155751182-47997810-4248-401a-a577-e524d1efdf4c.png)

## Components:
| ID | Component Name | Description |
| --- | --- | --- |
| `C_01` | **ON/OFF Button** | To turn ON/OFF the vehicle seat heater |
| `C_02` | **LED Indicator** | To indicate if the heater is turned on |
| `C_03` | **Oscilloscope** | To display the temperature and other things |
| `C_04` | **Temperature Sensor** | This input can give the current temperature |
| `C_05` | **Microcontroller** | ATmega328 Microcontroller |
| `C_06` | **Memory Chip** | It can store data or it can be used to process code |

## High Level Requirements:
| ID | Description | Category |
| --- | --- | --- | 
| HR01 | The system should be able to sense if the user is present | Technical | 
| HR02 | The user should be able to vary the seat Temperature | Technical |  
| HR03 | The LED should blink when heater is turned on | Technical |  

## Low Level Requirement:
| ID | Description | Category |
| --- | --- | --- | 
| LR01 | Current temperature must be shown on the LCD Display | Technical | 
| LR02 | The User Should be able to turn ON/OFF the heater | Technical |  
| LR03 |  | Technical |  


