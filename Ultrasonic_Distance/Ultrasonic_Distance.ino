int trigPin = 9;    // Trigger pin connected to pin 9
int echoPin = 10;   // Echo pin connected to pin 10
long duration;      // Variable to store the duration of the echo
int distance;       // Variable to store the distance

void setup() {
    pinMode(trigPin, OUTPUT);   // Set trigger pin as output
    pinMode(echoPin, INPUT);    // Set echo pin as input
    Serial.begin(9600);         // Initialize serial communication
}

void loop() {
    digitalWrite(trigPin, LOW);  
    delayMicroseconds(2);   // Wait for a stable low signal
    digitalWrite(trigPin, HIGH);  // Send a pulse to the trigger pin
    delayMicroseconds(10);  // Wait for 10ms
    digitalWrite(trigPin, LOW);  // Stop sending pulse
    
    duration = pulseIn(echoPin, HIGH);  // Measure the echo time
    distance = duration * 0.034 / 2;    // Calculate the distance in cm

    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");
    delay(1000);  // Wait for 1 second before next measurement
}
