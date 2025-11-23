/*
  Goal: This program reads an analog value "bit value" from pin A0, converts it to 
        the corresponding voltage (0–5V), and prints the voltagethat corresponds 
        to bit value.
  Theme: Analog-to-digital conversion (ADC) and voltage calculation.
*/

void setup() {
  Serial.begin(9600); // Starts serial communication at a baud rate of 9600
}

void loop() {
  int V = analogRead(A0);        // Reads the analog voltage on pin A0 (returns 0–1023)
  float VA = V * (5.00 / 1023.0); // Converts the bit value reading into voltage (0V to 5V)

  Serial.print("Voltage = ");         // Prints "Voltage =" 
  Serial.println(VA);            // Prints the calculated voltage and then begins a new line
  delay(500);    // adds a small delay to make the values more readable
}

