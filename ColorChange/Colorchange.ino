#include <FastLED.h>
#define LED_PIN     2
#define NUM_LEDS    16
CRGB leds[NUM_LEDS];
void setup() {
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
  
}
void loop() {

  for (int i = 0; i <=240; i++){
    leds[0] = CRGB(i, i+30, i+20);
    leds[2] = CRGB(i, i+30, i+20);
    leds[4] = CRGB(i, i+30, i+20);
    leds[6] = CRGB(i, i+30, i+20);
    leds[8] = CRGB(i, i+30, i+20);
    leds[10] = CRGB(i, i+30, i+20);
    leds[12] = CRGB(i, i+30, i+20);
    leds[14] = CRGB(i, i+30, i+20);
     FastLED.show();
     delay(50);
     
  }
  
}
