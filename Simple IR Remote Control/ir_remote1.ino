#include <IRremote.h>

// Define pin number for the IR receiver
const int receiverPin = 2;

// Define the IR remote object
IRrecv irrecv(receiverPin);
decode_results results;

void setup() {
  // Initialize serial communication
  Serial.begin(9600);
  // Enable the IR receiver
  irrecv.enableIRIn();
}

void loop() {
  // Check if IR signal is received
  if (irrecv.decode(&results)) {
    // Print the received IR code to the Serial Monitor
    Serial.println(results.value, HEX);
    // Resume receiving IR signals
    irrecv.resume();
  }
}
