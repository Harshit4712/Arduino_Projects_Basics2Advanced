// Define the analog pin connected to the sensor
const int tempPin = A0;

void setup() {
  // Initialize Serial communication
  Serial.begin(9600);
}

void loop() {
  int reading = analogRead(tempPin);  
  float voltage = reading * 5.0;
  voltage /= 1024.0; 
  // Convert the voltage to temperature in degrees Celsius
  float temperatureC = (voltage - 0.5) * 100 ;
  // Convert the temperature to degrees Fahrenheit (optional)
  float temperatureF = (temperatureC * 9.0 / 5.0) + 32.0;
  
  // Print the temperature in Celsius
  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.print(" C, ");
  // Print the temperature in Fahrenheit
  Serial.print(temperatureF);
  Serial.println(" F");
  
  // Wait a bit before taking another reading
  delay(1000);
}
