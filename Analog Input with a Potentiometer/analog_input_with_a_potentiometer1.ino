// Define the pin numbers
const int ledPin = 9;        // the PWM pin the LED is attached to
const int analogPin = A0;    // the analog pin the potentiometer is attached to

void setup() {
  // nothing to initialize
}

void loop() {
  int sensorValue = analogRead(analogPin);  // read the value from the potentiometer
  int ledBrightness = map(sensorValue, 0, 1023, 0, 255); // map it to the range of the LED brightness
  analogWrite(ledPin, ledBrightness);  // set the brightness of the LED
  delay(10);  // short delay for stability
}
