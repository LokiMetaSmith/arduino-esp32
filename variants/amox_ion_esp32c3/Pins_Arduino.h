
#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>
#include "soc/soc_caps.h"

#define USB_VID 0x303a
#define USB_PID 0x1001
#define USB_MANUFACTURER "AMOX"
#define USB_PRODUCT      "ION Control ESP32-S3"
#define USB_SERIAL       ""  // Empty string for MAC address

// User LED
#define LED_BUILTIN 17
#define BUILTIN_LED LED_BUILTIN  // backward compatibility

#define PIN_NEOPIXEL 18
#define NEOPIXEL_PIN 18
// RGB_BUILTIN and RGB_BRIGHTNESS can be used in new Arduino API rgbLedWrite() and digitalWrite() for blinking
#define RGB_BUILTIN    (PIN_NEOPIXEL + SOC_GPIO_PIN_COUNT)
#define RGB_BRIGHTNESS 64

#define NEOPIXEL_NUM    1

#define TC_SO 48


#define PIN_BUTTON_GPIO0   0


static const uint8_t TX = 39;
static const uint8_t RX = 40;
#define TX1 TX
#define RX1 RX

static const uint8_t SDA = 33;
static const uint8_t SCL = 26;

static const uint8_t SS = 34;
static const uint8_t MOSI = 36;
static const uint8_t SCK = 31;
static const uint8_t MISO = 37;

static const uint8_t A0 = 3;
static const uint8_t A1 = 2;
static const uint8_t A2 = 1;
static const uint8_t A3 = 4;


static const uint8_t T3 = 3;  // Touch pin IDs map directly
static const uint8_t T8 = 8;  // to underlying GPIO numbers NOT
static const uint8_t T9 = 9;  // the analog numbers on board silk
static const uint8_t T10 = 10;
static const uint8_t T11 = 11;
static const uint8_t T12 = 12;

#endif /* Pins_Arduino_h */
