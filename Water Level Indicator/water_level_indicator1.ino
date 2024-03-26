int sensorPin = A0; // Select the input pin for the potentiometer
int sensorValue = 0; // Variable to store the value coming from the sensor

void setup() {
  // Declare the LED pins as outputs
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  // Start serial communication for debugging
  Serial.begin(9600);
}

void loop() {
  // Read the value from the sensor
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue); // Print the sensor value to the serial monitor
  
  // Turn LEDs on/off based on the water level
  if(sensorValue > 768) { // Highest water level
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
  } else if(sensorValue > 512) { // High water level
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
  } else if(sensorValue > 256) { // Medium water level
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  } else if(sensorValue > 0) { // Low water level
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  } else { // No water
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  }
  
  delay(1000); // Wait for a bit before reading the sensor again
}
