// pins used for the application
#define PIN_LED_RIGHT 11
#define PIN_LED_LEFT 12

// delay between flashes in milliseconds
#define DURATION 40

// number of flashes per iteration
#define CYCLES 5

// configure the pins for digital output
void setup() {
  pinMode(PIN_LED_RIGHT, OUTPUT);
  pinMode(PIN_LED_LEFT, OUTPUT);
}

/*
 * To cause the effect of blue lights
 * this function flashes two leds in sequence 
 * for the configured number of iterations.
 */
void loop() {
  for (byte n = 0; n < CYCLES; n++) {
    digitalWrite(PIN_LED_RIGHT, HIGH);
    delay(DURATION);
    digitalWrite(PIN_LED_RIGHT, LOW);
    delay(DURATION);
  }

  for (byte n = 0; n < CYCLES; n++) {
    digitalWrite(PIN_LED_LEFT, HIGH);
    delay(DURATION);
    digitalWrite(PIN_LED_LEFT, LOW);
    delay(DURATION);
  }  
}
