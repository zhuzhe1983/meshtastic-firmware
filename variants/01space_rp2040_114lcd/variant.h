// #define RADIOLIB_CUSTOM_ARDUINO 1
// #define RADIOLIB_TONE_UNSUPPORTED 1
// #define RADIOLIB_SOFTWARE_SERIAL_UNSUPPORTED 1

#define ARDUINO_ARCH_AVR

// #define USE_SH1106 1

// default I2C pins:
// SDA = 4
// SCL = 5

// Recommended pins for SerialModule:
// txd = 8
// rxd = 9

#define EXT_NOTIFY_OUT 22
#undef BUTTON_PIN // Pin 17 used for antenna switching via DIO4

#define LED_PIN PIN_LED

#define BATTERY_PIN 29
//  ratio of voltage divider = 3.0 (R17=200k, R18=100k)
// #define ADC_MULTIPLIER 3.1 // 3.0 + a bit for being optimistic

#define HAS_CPU_SHUTDOWN 1
#define USE_SX1262

#undef LORA_SCK
#undef LORA_MISO
#undef LORA_MOSI
#undef LORA_CS

// https://github.com/01Space/RP2040-1.14LCD
// https://github.com/01Space/RP2040-1.14LCD/raw/main/image/RP2040-LORA%20(1).jpg
#define LORA_SCK 18  // GPIO18
#define LORA_MISO 16 // GPIO16
#define LORA_MOSI 19 // GPIO19
#define LORA_CS 14   // GPIO14

#define LORA_DIO0 RADIOLIB_NC // No GPIO connection
#define LORA_RESET 23         // GPIO23
#define LORA_BUSY 15          // GPIO15
#define LORA_DIO1 RADIOLIB_NC          // No GPIO connection
#define LORA_DIO2 RADIOLIB_NC // Antenna switching, no GPIO connection
#define LORA_DIO3 RADIOLIB_NC // No GPIO connection
#define LORA_DIO4 17          // GPIO17

// On rp2040-lora board the antenna switch is wired and works with complementary-pin control logic.
// See PE4259 datasheet page 4

#ifdef USE_SX1262
#define SX126X_CS LORA_CS
#define SX126X_DIO1 LORA_DIO1
#define SX126X_BUSY LORA_BUSY
#define SX126X_RESET LORA_RESET
#define SX126X_DIO2_AS_RF_SWITCH // Antenna switch CTRL
#define SX126X_RXEN LORA_DIO4    // Antenna switch !CTRL via GPIO17
// #define SX126X_DIO3_TCXO_VOLTAGE 1.8
#endif


//


#define ST7789_DRIVER 1
#define TFT_WIDTH 240
#define TFT_HEIGHT 135
// #define TFT_MISO WB_SPI_MISO
#define TFT_MOSI 11
#define TFT_SCLK 10
#define TFT_CS 9
#define TFT_DC 8
#define TFT_RST 12
#define TFT_BL 2
#define LOAD_GLCD 1
#define LOAD_GFXFF 1
#define TFT_RGB_ORDER 0
#define SPI_FREQUENCY 50000000
#define TFT_SPI_PORT SPI1
#define ST7789_CS WB_SPI_CS // Adds compatibility with the rest of the checking for a ST7789 TFT.

#define SCREEN_ROTATE
#define SCREEN_TRANSITION_FRAMERATE 5

#define HAS_TOUCHSCREEN 1
#define SCREEN_TOUCH_INT WB_IO6

#define CANNED_MESSAGE_MODULE_ENABLE 1