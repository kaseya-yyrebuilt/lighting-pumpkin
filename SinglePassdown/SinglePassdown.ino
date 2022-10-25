#include "FastLED.h"
 
// How many leds in your strip?
#define NUM_LEDS 16
 
#define DATA_PIN 2
//#define CLOCK_PIN 13
 
CRGB leds[NUM_LEDS];
 
void setup() { 
    // Uncomment/edit one of the following lines for your leds arrangement.
    // FastLED.addLeds<TM1803, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<TM1804, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<TM1809, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<WS2811, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<WS2812, DATA_PIN, RGB>(leds, NUM_LEDS);
    FastLED.addLeds<WS2812B, DATA_PIN, RGB>(leds, NUM_LEDS);
    }
 
void loop() {
    for(int i=0; i<NUM_LEDS; i++){
        leds[i] = CHSV(160, 255, 128);
        FastLED.show();
        delay(50);
        leds[i] = CHSV(0,0,0);
        FastLED.show();
    }
}
