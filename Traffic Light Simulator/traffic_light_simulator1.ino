// Define LED pin numbers
const int redLed = 2;    // Red LED connected to digital pin 2
const int yellowLed = 3; // Yellow LED connected to digital pin 3
const int greenLed = 4;  // Green LED connected to digital pin 4

void setup() {
  // Initialize the LED pins as outputs
  pinMode(redLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
}

void loop() {
  // Red light sequence
  digitalWrite(redLed, HIGH);
  delay(5000); // Red light for 5 seconds
  digitalWrite(redLed, LOW);

  // Green light sequence
  digitalWrite(greenLed, HIGH);
  delay(5000); // Green light for 5 seconds
  digitalWrite(greenLed, LOW);
  
  // Yellow light sequence
  digitalWrite(yellowLed, HIGH);
  delay(2000); // Yellow light for 2 seconds
  digitalWrite(yellowLed, LOW);
}
