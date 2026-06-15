F405_TARGETS += $(TARGET)

FEATURES += VCP

TARGET_SRC += \
    drivers/accgyro/accgyro_spi_icm426xx.c \
    drivers/barometer/barometer_dps310.c
