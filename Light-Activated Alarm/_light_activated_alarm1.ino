// Define pin numbers
const int ldrPin = A0;    // Potentiometer (as LDR alternative) connected to analog pin A0
const int buzzerPin = 3;  // Buzzer connected to digital pin 3

void setup() {
  // Set buzzer pin as output
  pinMode(buzzerPin, OUTPUT);
  // Initialize serial communication
  Serial.begin(9600);
}

void loop() {
  // Read the value from the potentiometer
  int ldrValue = analogRead(ldrPin);
  // Print the potentiometer value to the Serial Monitor
  Serial.println(ldrValue);

  // If the light intensity falls below a threshold (adjust as needed)
  if (ldrValue < 200) {
    // Turn on the buzzer alarm
    digitalWrite(buzzerPin, HIGH);
    // Print a message indicating the alarm is activated
    Serial.println("Alarm activated!");
    // Wait for a short duration
    delay(1000);
  } else {
    // Turn off the buzzer alarm
    digitalWrite(buzzerPin, LOW);
  }
  // Wait for a short duration before reading the potentiometer value again
  delay(100);
}
