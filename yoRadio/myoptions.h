#ifndef myoptions_h
#define myoptions_h


#define TFT_INVERSION_ON

#define DSP_MODEL DSP_ST7789
#define DSP_HSPI true
#define LED_INVERT true
#define TFT_CS 15
#define TFT_DC 2
#define TFT_RST -1

#define PLAYER_FORCE_MONO false

#define TFT_ROTATE 2

#define TFT_MISO 12
#define TFT_MOSI 13
#define TFT_SCLK 14
#define TS_CS 33

#define TOUCH_OFFSET_ROTATION 1 // Chip select pin (T_CS) of touch screen
#define SMOOTH_FONT
#define TS_SPIPINS 14, 12, 13 /* SCK, MISO, MOSI */
#define SPI_FREQUENCY 55000000 // STM32 SPI1 only (SPI2 maximum is 27MHz)
#define TS_MODEL TS_MODEL_XPT2046 // TS_MODEL_GT911
#define SPI_READ_FREQUENCY 20000000
#define SPI_TOUCH_FREQUENCY 2500000
#define USE_HSPI_PORT

#define LED_BUILTIN true
// #define BRIGHTNESS_PIN 27
#define SDC_CS 5
#define IR_PIN 21

//#define LIGHT_SENSOR 34
//#define AUTOBACKLIGHT_MAX 1024


// --- AUDIO SETTINGS ---
// Start with Internal DAC to test, then upgrade to I2S (PCM5102) later
#define I2S_INTERNAL false

#define I2S_LRC     25
#define I2S_BCLK    26
#define I2S_DOUT    27

// --- OTHER ---
#define L10N_LANGUAGE RO
//#define BRIGHTNESS_PIN TFT_BL
#define AUTOBACKLIGHT_MAX   1024
#endif
