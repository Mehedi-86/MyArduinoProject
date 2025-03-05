int buzzer = 8;  // Buzzer connected to pin 8
int button = 7;  // Button connected to pin 7
int buttonState = 0;

void setup() {
    pinMode(buzzer, OUTPUT);  // Set buzzer pin as output
    pinMode(button, INPUT);   // Set button pin as input
}

void loop() {
    buttonState = digitalRead(button);  // Read button state

    if (buttonState == HIGH) {
        digitalWrite(buzzer, HIGH);  // Turn buzzer ON
    } else {
        digitalWrite(buzzer, LOW);   // Turn buzzer OFF
    }
}
