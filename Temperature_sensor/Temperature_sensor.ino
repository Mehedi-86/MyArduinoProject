int tempPin = A0; // LM35 connected to analog pin A0
float tempC = 0;   // Variable to store temperature in Celsius

void setup() {
    Serial.begin(9600);  // Initialize serial communication
}

void loop() {
    int sensorValue = analogRead(tempPin);  // Read LM35 sensor value
    tempC = (sensorValue * 5.0 * 100.0) / 1024.0;  // Convert to Celsius
    Serial.print("Temperature: ");
    Serial.print(tempC);
    Serial.println(" °C");
    delay(1000); // Wait for 1 second before reading again
}
