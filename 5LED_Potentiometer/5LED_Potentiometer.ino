/* 
MAIN GOAL: 
  Read the value of a potentiometer and turn on 5 LEDs one by one depending on 
  the analog bit value (0–1023).

THEME: 
  Analog input reading and LED control.
*/

int sensorPin = A0;       // The input pin where the potentiometer middle pin is connected
int sensorValue = 0;      // Variable that will store the value from the potentiometer

void setup() {
  Serial.begin(9600);     // Start serial communication to print the potentiometer value

  pinMode(13, OUTPUT);    // Set digital pin 13 as an output (LED 1)
  pinMode(12, OUTPUT);    // Set digital pin 12 as an output (LED 2)
  pinMode(11, OUTPUT);    // Set digital pin 11 as an output (LED 3)
  pinMode(10, OUTPUT);    // Set digital pin 10 as an output (LED 4)
  pinMode(9, OUTPUT);     // Set digital pin 9 as an output (LED 5)
}

void loop() {

  sensorValue = analogRead(sensorPin);  // Read the analog value from A0 (0–1023)
  Serial.println(sensorValue);          // Print the value to the Serial Monitor

  if (sensorValue == 0) {               // If the value is exactly 0
    digitalWrite(13, 0);                // Turn OFF LED 
    digitalWrite(12, 0);                // Turn OFF LED 
    digitalWrite(11, 0);                // Turn OFF LED 
    digitalWrite(10, 0);                // Turn OFF LED 
    digitalWrite(9, 0);                 // Turn OFF LED 
  }

  else if (sensorValue > 0 && sensorValue <= 204) {   // Range for 1 LED
    digitalWrite(13, 1);                 // Turn ON LED 
    digitalWrite(12, 0);                 // Turn OFF LED 
    digitalWrite(11, 0);                 // Turn OFF LED 
    digitalWrite(10, 0);                 // Turn OFF LED 
    digitalWrite(9, 0);                  // Turn OFF LED 
  }

  else if (sensorValue > 204 && sensorValue <= 408) { // Range for 2 LEDs
    digitalWrite(13, 1);                // Turn ON LED 
    digitalWrite(12, 1);                // Turn ON LED 
    digitalWrite(11, 0);                // Turn OFF LED 
    digitalWrite(10, 0);                // Turn OFF LED 
    digitalWrite(9, 0);                 // Turn OFF LED 
  }

  else if (sensorValue > 408 && sensorValue <= 612) { // Range for 3 LEDs
    digitalWrite(13, 1);                // Turn ON LED 
    digitalWrite(12, 1);                // Turn ON LED 
    digitalWrite(11, 1);                // Turn ON LED 
    digitalWrite(10, 0);                // Turn OFF LED 
    digitalWrite(9, 0);                 // Turn OFF LED 
  }

  else if (sensorValue > 612 && sensorValue <= 816) { // Range for 4 LEDs
    digitalWrite(13, 1);                // Turn ON LED 
    digitalWrite(12, 1);                // Turn ON LED 
    digitalWrite(11, 1);                // Turn ON LED 
    digitalWrite(10, 1);                // Turn ON LED 
    digitalWrite(9, 0);                 // Turn OFF LED 
  }

  else if (sensorValue > 816 && sensorValue <= 1023) { // Range for 5 LEDs
    digitalWrite(13, 1);               // Turn ON LED 
    digitalWrite(12, 1);               // Turn ON LED 
    digitalWrite(11, 1);               // Turn ON LED 
    digitalWrite(10, 1);               // Turn ON LED 
    digitalWrite(9, 1);                // Turn ON LED 
  }
}
