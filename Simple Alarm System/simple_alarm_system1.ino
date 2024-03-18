// Define pin numbers
const int photoResistorPin = A0; // Photoresistor at Arduino analog pin A0
const int buzzerPin = 8;         // Piezo buzzer at digital pin 8

void setup() {
  pinMode(buzzerPin, OUTPUT); // Set the buzzer as an output
  Serial.begin(9600);         // Initialize Serial Monitor
}

void loop() {
  int lightLevel = analogRead(photoResistorPin); // Read the light level
  Serial.println(lightLevel);                    // Print the light level to Serial Monitor
  
  // Determine if the light level is below a threshold
  if(lightLevel < 200) {  // Assuming a lower threshold for light level
    tone(buzzerPin, 1000); // Turn on the buzzer - 1000 is the frequency in Hz
    delay(200);            // Wait for 200 milliseconds
    noTone(buzzerPin);     // Turn off the buzzer
    delay(200);            // Wait for 200 milliseconds
  } else {
    noTone(buzzerPin);     // Make sure the buzzer is off
  }

  delay(100); // Short delay before next loop iteration
}
