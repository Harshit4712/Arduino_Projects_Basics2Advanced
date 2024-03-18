// Define the number of LEDs
const int numLeds = 6;
int ledPins[] = {2, 3, 4, 5, 6, 7}; // the pin numbers for the LEDs

void setup() {
  // initialize the ledPin as an output:
  for(int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // loop from the first LED to the last
  for(int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], HIGH); // turn the LED on
    delay(100); // wait for 100 milliseconds
    digitalWrite(ledPins[i], LOW); // turn the LED off
  }
  // loop from the last LED to the first
  for(int i = numLeds - 1; i >= 0; i--) {
    digitalWrite(ledPins[i], HIGH); // turn the LED on
    delay(100); // wait for 100 milliseconds
    digitalWrite(ledPins[i], LOW); // turn the LED off
  }
}
