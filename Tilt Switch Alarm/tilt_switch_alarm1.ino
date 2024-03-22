// Define pin numbers
const int tiltSwitchPin = 2; // Tilt switch connected to digital pin 2
const int buzzerPin = 3;     // Buzzer connected to digital pin 3

void setup() {
  pinMode(tiltSwitchPin, INPUT); // Set tilt switch pin as input
  pinMode(buzzerPin, OUTPUT);    // Set buzzer pin as output
}

void loop() {
  // Read the state of the tilt switch
  int tiltState = digitalRead(tiltSwitchPin);

  // If the tilt switch is triggered (HIGH), sound the buzzer
  if (tiltState == HIGH) {
    digitalWrite(buzzerPin, HIGH); // Turn on the buzzer
    delay(1000);                   // Sound the buzzer for 1 second
    digitalWrite(buzzerPin, LOW);  // Turn off the buzzer
    delay(1000);                   // Wait for 1 second
  }
}
