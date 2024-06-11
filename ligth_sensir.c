/*
    Project name : Light Sensors
    Modified Date: 11-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-light-sensors
*/

const int lightSensorPin = A0; // Analog pin connected to the light sensor

void setup() {
  // Initialize serial communication
  Serial.begin(9600);
}

void loop() {
  // Read the voltage from the light sensor
  int sensorValue = analogRead(lightSensorPin);
  
  // Print the sensor value to the Serial Monitor
  Serial.print("Light Sensor Value: ");
  Serial.println(sensorValue);
  
  // Add a small delay to avoid spamming the Serial Monitor
  delay(1000);
}
