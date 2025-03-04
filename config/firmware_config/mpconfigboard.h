
#define MICROPY_HW_BOARD_NAME "PyCubedMini"
#define MICROPY_HW_MCU_NAME "samd51j20"
#define CIRCUITPY_MCU_FAMILY samd51

#define MICROPY_HW_NEOPIXEL   (&pin_PA21)

#define MICROPY_PORT_A        (PORT_PA08 | PORT_PA09 | PORT_PA10 | PORT_PA11)
#define MICROPY_PORT_B        (PORT_PB10 | PORT_PB11)
#define MICROPY_PORT_C        (0)
#define MICROPY_PORT_D        (0)

#define SPI_FLASH_WP_PIN            &pin_PA10
#define SPI_FLASH_HOLD_PIN          &pin_PA11

// External flash MR2xH40 MRAM
#define EXTERNAL_FLASH_QSPI_SINGLE
#define EXTERNAL_FLASH_NO_JEDEC

#define AUTORESET_DELAY_MS 500

#define BOARD_HAS_CRYSTAL 1

#define DEFAULT_I2C_BUS_SCL  (&pin_PA23)
#define DEFAULT_I2C_BUS_SDA  (&pin_PA22)

#define DEFAULT_SPI_BUS_SCK  (&pin_PA13)
#define DEFAULT_SPI_BUS_MOSI (&pin_PA12)
#define DEFAULT_SPI_BUS_MISO (&pin_PA14)

#define DEFAULT_UART_BUS_RX  (&pin_PA05)
#define DEFAULT_UART_BUS_TX  (&pin_PA04)

#define IGNORE_PIN_PA24     1
#define IGNORE_PIN_PA25     1
