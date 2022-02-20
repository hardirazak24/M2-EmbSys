# Washing Machine
A Washing Machine is a machine to wash laundry such as clothes and sheets.
## Block Diagram:
![Blockdiagram](https://user-images.githubusercontent.com/73360521/154840097-22ef61bb-91d5-4a94-b827-f018c5a47551.png)

## Components:
| ID | Component Name | Description |
| --- | --- | --- |
| `C_01` | Mechanical Keypad | It is used to select the options given in the washing machine |
| `C_02` | Water Level Sensor | This input gives the current water level in washing machine |
| `C_03` | Temperature Sensor | This input can give the current temperature of the water. |
| `C_04` | LCD Display | It shows the current ongoing activities in the washing machine |
| `C_05` | Microcontroller | PIC Microcontroller |
| `C_06` | Relay | It is an electrically operated switch |
| `C_07` | Memory Chip | It can store data or it can be used to process code |
| `C_08` | Drum Motor | It is connected with the Washing Machine drum and it can be used for rotating drum |
| `C_09` | Water Heater | It is a signal output from microcontroller and input from water heater which is used to switch on or off the heater |
| `C_010` | Water Pump | This signal is used to control the water pump of washing machine |
| `C_011` | Door Lock | It is a signal to know if the door is locked or not in a washing machine |

## Requirements:
### High Level Requirements
| ID | Description | Category |
| --- | --- | --- | 
| HR01 | If the door is open, the washing machine should not work. If the door is accidentally opened between wash operation, then the system should stop working until the door is closed. | Technical | 
| HR02 | In the Keypad it should show the options for Manual washing and Automatic washing. | Technical |  
| HR03 | When the Automatic washing option is chosen, then there shouldn’t be no human interference. | Technical |  

### Low Level Requirements
| ID | Description | HLR ID |
| --- | --- | --- | 
| LR01 | There should be an option for washing | HR02 | 
| LR02 | There should be an option for rinsing | HR02 | 
| LR03 | There should be an option for spinning | HR02 |  
| LR04 | There should be an option for drying | HR02 | 
| LR05 | There should be an option for hot water or cold water | HR02 | 
