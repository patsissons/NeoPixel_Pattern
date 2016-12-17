#include <FastLED.h>
#include <animation.h>

// include animation pattern
#include "pattern.h"

// PWM output pin
#define PIN 6

// LED Brightness (0 - 255)
#define BRIGHTNESS 128

// LED structure
CRGB *leds;

void setup() {
  // allocate memory for the LED structure
  leds = (CRGB*)malloc(animation.getLedCount());

  // initialize FastLED
  LEDS.addLeds<WS2812B, PIN, GRB>(leds, animation.getLedCount());

  // reset the leds
  LEDS.showColor(CRGB(0, 0, 0));
  LEDS.setBrightness(BRIGHTNESS);
  LEDS.clear();
  LEDS.show();
}

void loop() {
  animation.draw(leds);
  
  delay(animation.getFrameDelay());
}


