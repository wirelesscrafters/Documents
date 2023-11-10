// define led according to pin diagram
#define POWER_LED 2
#define STATUS_LED 3

void setup() {
  // initialize digital pin power led as an output
  pinMode(POWER_LED, OUTPUT);
  // initialize digital pin status led as an output
  pinMode(STATUS_LED, OUTPUT);
}

void loop() {
  digitalWrite(POWER_LED, HIGH);    // turn the power LED on
  digitalWrite(STATUS_LED, HIGH);   // turn the status LED on
  delay(1000);                      // wait for a second
  digitalWrite(POWER_LED, LOW);     // turn the power LED off
  digitalWrite(STATUS_LED, LOW);    // turn the status LED off
  delay(1000);                      // wait for a second
}