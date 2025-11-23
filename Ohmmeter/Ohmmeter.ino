/*  

  Goal: 
    - Read an analog voltage from pin A0. 
    - Convert bit value reading to voltage. 
    - Calculate current through a known resistor (10kΩ). 
    - Calculate the resistance of an unknown resistor using Ohm's Law. 
  Theme: 
    Analog sensor reading, Ohm's Law calculations, and real-time data display. 

*/ 

void setup() { 

 Serial.begin(9600);        // Start serial monitor 
} 

void loop() { 

int V = analogRead(A0);                 // Read the bit value from pin A0 
float VA = V * (5.00 / 1023.0);         // Convert bit value to voltage (0–5V) 
float I = ((5.00 - VA) / 10000.0);      // Calculate current using Ohm's Law: I = (Vsource − Vmeasured) / Rknown 
float R = (VA / I);                     // Calculate resistance of unknown resistor: R = V / I 
Serial.print("Resistance = ");          // Print "Resistance =" 
Serial.println(R);                      // Print calculated resistance in ohms then start a new line

} 
