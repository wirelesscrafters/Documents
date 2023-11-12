// define led according to pin diagram
#define STATUS_LED 12

void setup() {
  // initialize digital pin status led as an output
  pinMode(STATUS_LED, OUTPUT);
}

void loop() {
  digitalWrite(STATUS_LED, HIGH);   // turn the status LED on
  delay(1000);                      // wait for a second
  digitalWrite(STATUS_LED, LOW);    // turn the status LED off
  delay(1000);                      // wait for a second
}