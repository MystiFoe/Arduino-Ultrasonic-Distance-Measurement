# Arduino Ultrasonic Distance Measurement

This repository contains Arduino code for measuring distance using an ultrasonic sensor and displaying the results on the serial monitor.

## Hardware Requirements

To use this code, you will need the following components:
- Arduino board (e.g., Arduino Uno)
- HC-SR04 ultrasonic sensor
- Jumper wires

## Circuit Connection

Connect the ultrasonic sensor to the Arduino board as follows:

- VCC: Connect to 5V on the Arduino
- GND: Connect to GND on the Arduino
- Trig: Connect to a digital pin (e.g., D5) on the Arduino
- Echo: Connect to a digital pin (e.g., D6) on the Arduino

## Setup Instructions

1. Clone or download this repository to your local machine.
2. Open the Arduino IDE or compatible software.
3. Connect your Arduino board to your computer via USB.
4. Open the `Arduino-Ultrasonic-Distance-Measurement.ino` file from the downloaded repository in the Arduino IDE.
5. Select the appropriate board from the **Tools > Board** menu (e.g., Arduino Uno).
6. Compile and upload the code to your Arduino board.
7. Open the serial monitor at a baud rate of 9600 to view the measured distance.

## Usage

Upon successful upload of the code and opening the serial monitor, the Arduino board will measure the distance using the connected ultrasonic sensor. The measured distance in centimeters will be displayed on the serial monitor.

Feel free to modify the code to suit your specific requirements or extend the functionality. You can adjust the pins used for the Trig and Echo connections based on your circuit setup.

## Troubleshooting

If you encounter any issues or have questions, consider the following troubleshooting steps:
- Double-check the circuit connections to ensure they are correctly wired.
- Verify that the correct Arduino board is selected in the **Tools > Board** menu.
- Ensure that the serial monitor is set to the correct baud rate (9600 in this case).

## Contributing

Contributions to improve or enhance this code are welcome. If you have any suggestions, bug fixes, or additional features, feel free to submit a pull request.

## License

This code is released under the [MIT License](LICENSE). You are free to use, modify, and distribute the code for personal or commercial purposes.

## Acknowledgements

This code is based on the work of the Arduino community and the HC-SR04 ultrasonic sensor library.

If you find this code useful, consider giving it a star or sharing it with others.

Happy tinkering!
