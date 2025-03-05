int led = 13;         // LED connected to pin 13
int pirSensor = 7;    // PIR sensor connected to pin 7
int pirState = 0;     // Variable to store PIR sensor state

void setup() {
    pinMode(led, OUTPUT);  // Set LED pin as output
    pinMode(pirSensor, INPUT);  // Set PIR sensor pin as input
}

void loop() {
    pirState = digitalRead(pirSensor);  // Read PIR sensor

    if (pirState == HIGH) {  // Motion detected
        digitalWrite(led, HIGH);  // Turn LED ON
    } else {
        digitalWrite(led, LOW);   // Turn LED OFF
    }
}
