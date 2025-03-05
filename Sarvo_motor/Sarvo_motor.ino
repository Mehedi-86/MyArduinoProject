#include <Servo.h>  // Include Servo library

Servo myServo;  // Create Servo object to control the motor
int pos = 0;    // Variable to store servo position

void setup() {
    myServo.attach(9); // Servo connected to pin 9
}

void loop() {
    for (pos = 0; pos <= 180; pos++) {  // Sweep from 0 to 180 degrees
        myServo.write(pos);  // Set servo position
        delay(15);            // Wait for the servo to reach the position
    }

    for (pos = 180; pos >= 0; pos--) {  // Sweep from 180 to 0 degrees
        myServo.write(pos);  // Set servo position
        delay(15);            // Wait for the servo to reach the position
    }
}
