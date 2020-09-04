
#define MICROPY_HW_BOARD_NAME "PyCubedMini"
#define MICROPY_HW_MCU_NAME "samd51J20"
#define CIRCUITPY_MCU_FAMILY samd51

#define MICROPY_HW_NEOPIXEL   (&pin_PB22)

#define MICROPY_PORT_A        (PORT_PA08 | PORT_PA09 | PORT_PA10 | PORT_PA11)
#define MICROPY_PORT_B        ( PORT_PB10 | PORT_PB11)
#define MICROPY_PORT_C        (0)
#define MICROPY_PORT_D 		  (0)

#define CIRCUITPY_INTERNAL_NVM_SIZE 8192

#define BOARD_FLASH_SIZE (FLASH_SIZE - 0x4000 - CIRCUITPY_INTERNAL_NVM_SIZE)

// External flash W25Q80DV
#define EXTERNAL_FLASH_QSPI_DUAL

#define BOARD_HAS_CRYSTAL 1

#define DEFAULT_I2C_BUS_SCL  (&pin_PB13)
#define DEFAULT_I2C_BUS_SDA  (&pin_PB12)

#define DEFAULT_SPI_BUS_SCK  (&pin_PA13)
#define DEFAULT_SPI_BUS_MOSI (&pin_PA12)
#define DEFAULT_SPI_BUS_MISO (&pin_PA14)

#define IGNORE_PIN_PA24     1
#define IGNORE_PIN_PA25     1
