// Example for a 7-segment display connected to Arduino

int seg[] = {2, 3, 4, 5, 6, 7, 8}; // Pin connections for each segment
int num[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; // Number patterns for 7-segment

void setup() {
    for (int i = 0; i < 7; i++) {
        pinMode(seg[i], OUTPUT);  // Set segment pins as output
    }
}

void loop() {
    for (int i = 0; i < 10; i++) {
        displayNumber(i);
        delay(1000);  // Display number for 1 second
    }
}

void displayNumber(int n) {
    // Display each digit pattern on the 7-segment
    for (int i = 0; i < 7; i++) {
        digitalWrite(seg[i], num[n] & (1 << i));
    }
}
