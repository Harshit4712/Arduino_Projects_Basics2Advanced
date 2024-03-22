// Define pin numbers
const int knockSensorPin = 2; // Piezo buzzer pin connected to digital pin 2

void setup() {
  // Set knock sensor pin as input
  pinMode(knockSensorPin, INPUT);
  // Initialize serial communication
  Serial.begin(9600);
}

void loop() {
  // Read the state of the knock sensor
  int knockState = digitalRead(knockSensorPin);

  // If a knock is detected (sensor goes LOW), print a message
  if (knockState == LOW) {
    Serial.println("Knock detected!");
    // To prevent repeated detections, add a brief delay
    delay(1000);
  }

  // Wait for a short duration before reading the sensor state again
  delay(10);
}
