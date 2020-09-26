#include <avr/io.h>

#define LED_TOP PIN3_bm
#define LED_BOTTOM PIN2_bm

void setup() {
    // GPIO setup
    PORTA.DIRSET = LED_TOP;
    PORTA.DIRSET = LED_BOTTOM;
}

void loop() {
    PORTA.OUTCLR = LED_TOP;
    PORTA.OUTSET = LED_BOTTOM;
    delay(100);
    PORTA.OUTSET = LED_TOP;
    PORTA.OUTCLR = LED_BOTTOM;
    delay(100);
}
