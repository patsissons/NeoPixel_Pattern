const uint8_t animationData[] PROGMEM = {
// Frame: 0
    1, 0x00, 0x00,
// Frame: 1
    1, 0xf8, 0x00,
};

Animation animation(2, animationData, Animation::RGB565_RLE, 1, 1000);
