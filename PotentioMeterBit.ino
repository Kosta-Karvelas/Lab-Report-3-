/*
  Potentiometer with Bit Value Display

  Goal:
    Read the analog value from a potentiometer and display the raw
    10-bit ADC value (0 to 1023) on the Serial Monitor.

  Theme:
    Analog input reading and serial data display.
*/

// Assign analog pin A0 to the potentiometer
const int potPin = A0;   

void setup() {
  Serial.begin(9600);        // Start Serial Monitor at 9600 baud
}

void loop() {
  int potValue = analogRead(potPin);  // Read raw potentiometer value (0–1023)
  Serial.println(potValue);           // Send value to Serial Monitor
  delay(200);                         // Slow the readings for readability
}
