// Define pin numbers
const int photocellPin = A0; // Photocell pin connected to analog pin A0

void setup() {
  // Initialize serial communication
  Serial.begin(9600);
}

void loop() {
  // Read the value from the photocell
  int lightLevel = analogRead(photocellPin);

  // Print the light level to the Serial Monitor
  Serial.print("Light Level: ");
  Serial.println(lightLevel);

  // Wait for a short duration before reading the sensor value again
  delay(1000);
}
