# Simple Automatic Street Light with Arduino Uno

## Components
1. Arduino Uno
2. LDR (Light Dependent Resistor) Sensor Module
3. 220-ohm Resistor
4. LED
5. Breadboard & Jumper Wires

## LDR to Arduino UNO Pin Mapping (Power & Analog In)

| LDR Sensor Module Pin | Arduino Uno Pin |              Description               |
| :---------------------: | :----------------: | :-----------------------------------: |
|           VCC           |         5V         |                 Power                 |
|           GND           |        GND         |                Ground                 |
|     AO (Analog Out)     |         AO         | Analog Data (to read light) |

## LED and Resistor Connection
1. Connect the long leg of the LED (Anode) to Pin 9 on the Arduino (Digital PWM).
2. Connect the short leg of the LED (Cathode) to the 220-ohm resistor. Then, connect the other end of the resistor to the GND pin on the Arduino. The resistor is required to prevent the LED from burning out.

## How to Program the Arduino
1. Install Arduino IDE: Download and install the Arduino IDE on your computer.
2. Connect the Arduino: Use a USB cable to connect the Arduino Uno to your laptop.
3. Board Settings: In the Arduino IDE, go to Tools > Board and select Arduino Uno.
4. Port Settings: Go to Tools > Port and select the active port (typically labeled as COM3, COM4, etc.).
5. Write the Sketch: Type your code into the IDE.
6. Verify: Click the Checkmark icon to compile the code and ensure there are no syntax errors.
7. Upload: Click the Right Arrow icon to send the code from your laptop to the Arduino's memory. Wait until the status says "Done Uploading."