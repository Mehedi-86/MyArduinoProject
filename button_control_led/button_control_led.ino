int led = 13;        // LED connected to pin 13
int button = 7;      // Button connected to pin 7
int buttonState = 0; // Variable to hold button state

void setup() {
    pinMode(led, OUTPUT);       // Set LED pin as output
    pinMode(button, INPUT);     // Set button pin as input
}

void loop() {
    buttonState = digitalRead(button); // Read button state

    if (buttonState == HIGH) { // If button is pressed
        digitalWrite(led, HIGH); // Turn LED ON
    } else {
        digitalWrite(led, LOW); // Turn LED OFF
    }
}
