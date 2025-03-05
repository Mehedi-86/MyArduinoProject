int led = 9; // LED connected to pin 9 (PWM pin)
int potPin = A0; // Potentiometer connected to analog pin A0
int potValue = 0; // Variable to store potentiometer value

void setup() {
    pinMode(led, OUTPUT); // Set LED pin as output
}

void loop() {
    potValue = analogRead(potPin);  // Read the potentiometer value
    int brightness = map(potValue, 0, 1023, 0, 255); // Map value to range 0-255
    analogWrite(led, brightness);  // Control LED brightness
    delay(10); // Small delay for smooth transition
}
