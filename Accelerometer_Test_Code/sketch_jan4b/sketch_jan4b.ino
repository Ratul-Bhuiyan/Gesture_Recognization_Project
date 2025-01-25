const int xPin = A0; // X-axis
const int yPin = A1; // Y-axis
const int zPin = A2; // Z-axis

void setup() {
  // Initialize the Serial Monitor
  Serial.begin(9600);
  Serial.println("ADXL335 Accelerometer Reading");
}

void loop() {
  // Read the analog values from the ADXL335
  int xValue = analogRead(xPin);
  int yValue = analogRead(yPin);
  int zValue = analogRead(zPin);

  // Print the raw analog values to the Serial Monitor
  Serial.print("X: ");
  Serial.print(xValue - 320);
  Serial.print(" | Y: ");
  Serial.print(yValue - 327);
  Serial.print(" | Z: ");
  Serial.println(zValue - 386);

  // Add a small delay to make it readable
  delay(50); // Adjust the delay as needed
}
