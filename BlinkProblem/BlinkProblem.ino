/*
MAIN GOAL:
  Blink the built-in LED without using the delay() function
  while simultaneously reading and displaying a push button state.

THEME:
  Timing with millis() and non-blocking LED control.
*/

// Pin assignments
const int ledPin = LED_BUILTIN;  // Built-in LED pin (usually 13)
const int buttonPin = 2;          // Push button input pin

// Variables to track LED state and timing
int ledState = 0;                 // Current state of the LED (0 = OFF, 1 = ON)
unsigned long previousMillis = 0; // Stores the last time LED was updated

// Interval for LED blinking (milliseconds)
const long interval = 1000;       // 1 second

void setup() {
  pinMode(ledPin, OUTPUT);        // Set LED pin as output
  pinMode(buttonPin, INPUT_PULLUP); // Set button pin as input with internal pull-up
  Serial.begin(9600);             // Initialize Serial communication
}

void loop() {
  // Read the button state (invert because INPUT_PULLUP: LOW = pressed)
  int buttonValue = !digitalRead(buttonPin);
  Serial.println(buttonValue);    // Print button state to Serial Monitor

  // Check if it's time to toggle the LED
  unsigned long currentMillis = millis(); // Get current time

  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis; // Save the last toggle time

    // Toggle LED state
    if (ledState == 0) {
      ledState = 1;
    } else {
      ledState = 0;
    }

    digitalWrite(ledPin, ledState); // Update LED with current state
  }
}