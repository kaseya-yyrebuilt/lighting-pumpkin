#include <FastLED.h>
#define LED_PIN     2
#define NUM_LEDS    16
CRGB leds[NUM_LEDS];
void setup() {
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
}
void loop() {

    leds[1] = CRGB ( 240, 240, 169);
    leds[3] = CRGB ( 240, 240, 169);
    leds[5] = CRGB ( 240, 240, 169);
    FastLED.show();
    delay(1000);
  
}
