#pragma once

#define TARGET_BOARD_IDENTIFIER "F4WM"
#define USBD_PRODUCT_STRING  "FLYINGRCF4WINGMINI"

#define LED0                    PA14  // Blue
#define LED1                    PA13  // Green

// *************** SPI1 IMU *******************
#define USE_SPI
#define USE_SPI_DEVICE_1
#define SPI1_SCK_PIN PA5
#define SPI1_MISO_PIN PB4
#define SPI1_MOSI_PIN PA7

#define USE_IMU_ICM42605
#define USE_GYRO
#define USE_GYRO_SPI_ICM42605
#define GYRO_1_CS_PIN           PC14
#define GYRO_1_SPI_INSTANCE     SPI1
#define GYRO_1_ALIGN            CW270_DEG_FLIP

#define USE_ACC
#define USE_ACC_SPI_ICM42605

// *************** I2C1 Baro ******************
#define USE_I2C
#define USE_I2C_DEVICE_1
#define I2C1_SCL PB8
#define I2C1_SDA PB7
#define I2C_DEVICE              (I2CDEV_1)

#define USE_BARO
#define USE_BARO_DPS310
#define DEFAULT_BARO_DPS310
#define BARO_I2C_INSTANCE       (I2CDEV_1)

// *************** UART *****************************
#define USE_VCP

#define USE_UART1
#define UART1_TX_PIN            PA9
#define UART1_RX_PIN            PA10

#define USE_UART4
#define UART4_TX_PIN            PA0
#define UART4_RX_PIN            PA1

#define USE_UART5
#define UART5_TX_PIN            PC12
#define UART5_RX_PIN            PD2

#define USE_SOFTSERIAL1
#define SOFTSERIAL_1_TX_PIN     PA2
#define SOFTSERIAL_1_RX_PIN     PA2

#define SERIAL_PORT_COUNT       5

#define DEFAULT_RX_TYPE         RX_TYPE_SERIAL
#define SERIALRX_PROVIDER       SERIALRX_CRSF
#define SERIALRX_UART           SERIAL_PORT_USART1

// *************** ADC ***************************
#define USE_ADC
#define ADC_INSTANCE            ADC1
#define ADC_CHANNEL_1_PIN       PC4
#define VBAT_ADC_CHANNEL        ADC_CHN_1

// *************** Others ************************
#define DEFAULT_FEATURES        (FEATURE_OSD | FEATURE_TELEMETRY)
#define VBAT_SCALE_DEFAULT      2100
#define CURRENT_METER_SCALE     150

#define TARGET_IO_PORTA         0xffff
#define TARGET_IO_PORTB         0xffff
#define TARGET_IO_PORTC         0xffff
#define TARGET_IO_PORTD         (BIT(2))

#define MAX_PWM_OUTPUT_PORTS    7

#define USE_DSHOT
#define USE_ESC_SENSOR

#define USABLE_TIMER_CHANNEL_COUNT 8
