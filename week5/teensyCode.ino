#define LEDPIN 11  // Define the pin number for the LED

void setup() {
  // Initialize serial communication with the PC and Bluetooth module
  Serial.begin(9600);      // For serial monitor
  Serial1.begin(9600);     // For Bluetooth communication

  // Set the LED pin as an output
  pinMode(LEDPIN, OUTPUT);
}

void loop() {
  // Check if data is available from Bluetooth
  if (Serial1.available() > 0) {
    // Read the incoming string, removing the first character
    String str = Serial1.readString().substring(0);

    // Print the received command to the serial monitor
    Serial.println(str);

    // Process the command and control the LED
    if (str == "LED_ON") {
      digitalWrite(LEDPIN, HIGH);  // Turn the LED on
      Serial.println("LED ON");
    } else if (str == "LED_OFF") {
      digitalWrite(LEDPIN, LOW);   // Turn the LED off
      Serial.println("LED OFF");
    }
  }
}
