<h1 align="center">🛠 Arduino Projects </h1>
📌 Project Overview
This repository contains various Arduino-based projects designed to showcase different functionalities using common components like LEDs, sensors, motors, and displays. The projects demonstrate how to control and interact with various hardware using simple Arduino code and components. Whether you are a beginner or looking to expand your Arduino knowledge, these projects offer hands-on experience for learning the basics of electronics and programming.

📖 Table of Contents
<a href="#button-controlled-led">🔘 Button Controlled LED</a>
<a href="#seven-segment-display">🔢 7-Segment Display Counter</a>
<a href="#potentiometer-controlled-led">🎛 Potentiometer Controlled LED</a>
<a href="#temperature-sensor">🌡 Temperature Monitoring (LM35)</a>
<a href="#ultrasonic-distance">📏 Ultrasonic Distance Measurement</a>
<a href="#motion-detection">🚶‍♂️ Motion Detection (PIR Sensor)</a>
<a href="#buzzer-alarm">🔔 Buzzer Alarm System</a>
<a href="#servo-motor">🤖 Servo Motor Control</a>
<h2 id="button-controlled-led">🔘 Button Controlled LED</h2>
This project demonstrates how a simple button can control an LED. When you press the button, the LED turns on, and when you release it, the LED turns off. This is achieved using digital input (button) and digital output (LED) pins on the Arduino. It's a fundamental project for understanding how to interact with simple inputs and outputs.

<h2 id="seven-segment-display">🔢 7-Segment Display Counter</h2>
The 7-segment display is used to show numerical digits (0-9) by illuminating different combinations of its 7 segments. In this project, the Arduino controls each segment of the display to show numbers, allowing you to display counts or timers. This is a great project for learning how to control multiple outputs simultaneously to display numeric data.

<h2 id="potentiometer-controlled-led">🎛 Potentiometer Controlled LED</h2>
A potentiometer is a variable resistor that can be adjusted to provide an analog input (between 0 and 1023). In this project, the potentiometer is used to control the brightness of an LED. By turning the potentiometer, the Arduino adjusts the PWM signal to the LED, controlling its brightness. This project teaches how to work with analog inputs and outputs in Arduino.

<h2 id="temperature-sensor">🌡 Temperature Monitoring (LM35)</h2>
In this project, the LM35 temperature sensor is used to measure the ambient temperature in Celsius. The sensor provides an analog voltage that is proportional to the temperature. The Arduino reads this voltage and converts it into a temperature value, which can be displayed on the serial monitor. This project helps understand how analog sensors work and how to process their data.

<h2 id="ultrasonic-distance">📏 Ultrasonic Distance Measurement</h2>
This project uses an ultrasonic sensor (such as HC-SR04) to measure the distance between the sensor and an object. The sensor sends out a sound pulse and measures the time it takes for the pulse to return. By calculating the time and knowing the speed of sound, the distance is computed. This project is useful for applications like obstacle detection in robotics and automation systems.

<h2 id="motion-detection">🚶‍♂️ Motion Detection (PIR Sensor)</h2>
In this project, a Passive Infrared (PIR) sensor detects motion by measuring infrared radiation changes in its field of view. When motion is detected, the sensor sends a signal to the Arduino, which can trigger an action such as turning on an LED or activating a buzzer. This is a common project used in security systems and automated lighting.

<h2 id="buzzer-alarm">🔔 Buzzer Alarm System</h2>
This project demonstrates how to use a piezo buzzer to sound an alarm when a button is pressed. The buzzer is triggered when the button is pressed, alerting the user to an event. This project is commonly used in applications that require simple alert systems, like security alarms or notification systems.

<h2 id="servo-motor">🤖 Servo Motor Control</h2>
In this project, a servo motor is controlled by the Arduino to rotate to different angles. Servo motors are typically used in applications where precise control of rotation is needed, such as in robotics. The Arduino sends a PWM signal to the servo, controlling its position. This project helps in learning about controlling motors and understanding how PWM signals work.

📈 Future Enhancements
Web-based control for all projects using IoT
Integration with mobile applications for remote control
Enhanced error detection and handling for sensors
