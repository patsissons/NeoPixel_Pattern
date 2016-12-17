# NeoPixel Pattern

This sketch is designed to combine the [Blinkylabs Pattern Paint](http://blinkinlabs.com/blinkytape/patternpaint/) lighting sequence creator with the arduino [FastLED](http://fastled.io/) library. This combination allows quick and easy construction of lighting sequences that can be rendered effortlessly using an arduino and any number of NeoPixels.

## Getting Started

1. Install the [Arduino Software](https://www.arduino.cc/en/Main/Software) ([`choco install arduino`](https://chocolatey.org/packages/arduino))
1. Install [Blinkylabs Pattern Paint](http://blinkinlabs.com/blinkytape/patternpaint/)
1. Install the [FastLED Library](https://github.com/FastLED/FastLED/releases/latest)
1. Install the [BlinkyTape_Arduino Library](https://github.com/Blinkinlabs/BlinkyTape_Arduino/releases/latest)
1. Open the `NeoPixel_Pattern.ino` sketch
1. Create a pattern using Pattern Paint and save it as `pattern.h`
1. Update the `PIN` and `BRIGHTNESS` defines (if needed)
1. Compile and Upload the sketch

### Installing Arduino Libraries

1. Open the Arduino IDE
1. `Sketch` Menu `->` `Include Library` `->` `Add .ZIP Library...`
1. Locate downloaded zip file

## Designing Lighting sequences

You can use Pattern Paint to create your lighting sequences, or since Pattern Paint works with PNG and BMP files, you can alternatively use any raster image editor (such as Photoshop) to create complex effects and import the image into Pattern Paint.

The included lighting sequence simply blinks the first LED in the array with red.

## Troubleshooting

* Make sure configure your scene in Pattern Paint to match your led topology, or you may find your image gets stretched.
