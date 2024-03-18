const int signalPin = 9; // Signal pin for both Trig and Echo

long duration;
int distance;

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Clear the signalPin
  pinMode(signalPin, OUTPUT);
  digitalWrite(signalPin, LOW);
  delayMicroseconds(2);

  // Trigger the sensor by setting the signalPin high for 10 microseconds
  digitalWrite(signalPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(signalPin, LOW);

  // Read the echo
  pinMode(signalPin, INPUT);
  duration = pulseIn(signalPin, HIGH);

  // Calculate the distance
  distance = duration * 0.034 / 2; // Speed of sound wave divided by 2 (go and return)

  // Print the distance
  Serial.print("Distance: ");
  Serial.println(distance);

  delay(500); // Delay between measurements
}
