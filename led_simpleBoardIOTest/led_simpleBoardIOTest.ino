const int pinLED = 13;  // LED will be connected
                        // to *digital* pin 13.

void setup() {
  pinMode(pinLED, OUTPUT);  // Sets a digital pin as output
}

void loop() {
  digitalWrite(pinLED, HIGH);  // Turns pin on...
  delay(1000);
  digitalWrite(pinLED, LOW);   // Turns pin off...
  delay(2000);                 // Spicing things up...
}
