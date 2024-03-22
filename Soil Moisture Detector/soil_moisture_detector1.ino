// Define pin numbers
const int moistureSensorPin = A0; // Soil moisture sensor pin connected to analog pin A0

void setup() {
  // Initialize serial communication
  Serial.begin(9600);
}

void loop() {
  // Read the value from the soil moisture sensor
  int moistureLevel = analogRead(moistureSensorPin);

  // Print the moisture level to the Serial Monitor
  Serial.print("Moisture Level: ");
  Serial.println(moistureLevel);

  // Wait for a short duration before reading the sensor value again
  delay(1000);
}
