# Pulse-Width-Modulation
This Arduino sketch controls an LED connected to pin 11 on an Arduino board, such as an Arduino Uno, to set its brightness using PWM (Pulse Width Modulation). It is designed to demonstrate basic analog output functionality.
The sketch defines variables: redLed (pin 11 for the LED), dimmest (PWM value 1 for the lowest brightness), brightest (PWM value 255 for maximum brightness), and a commented-out wait variable (500ms, unused). In the setup function, pin 11 is configured as an output to control the LED.In the loop function, the LED is set to its dimmest level (PWM value 1) using analogWrite. The commented-out code suggests an intention to alternate between dimmest and brightest levels with a 500ms delay, but as written, the LED remains at the dimmest setting indefinitely.Hardware Requirements:Arduino board with PWM-capable pin 11 (e.g., Arduino Uno, Nano).
LED connected to pin 11 with a current-limiting resistor (e.g., 220 ohms) to ground.

Usage:Upload the sketch to your Arduino board using the Arduino IDE.
The LED on pin 11 will glow at its dimmest level continuously.

Notes:The analogWrite function uses PWM to control LED brightness, with values from 0 (off) to 255 (full brightness).
The current code only sets the LED to dimmest (1); uncommenting the analogWrite(redLed, brightest) and delay lines would create a blinking effect between dim and bright states.
The commented-out wait variable suggests a timing mechanism that is not currently used.
To modify the brightness, adjust the dimmest or brightest values or uncomment the alternating pattern.
This sketch is suitable for learning PWM and analog output on Arduino. Ensure pin 11 supports PWM on your board.
