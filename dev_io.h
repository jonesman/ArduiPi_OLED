
#define DEV_TYPE_I2C 1
#define DEV_TYPE_SPI 2

#define I2C_DEV "/dev/i2c-0"
#define I2C_ADDR 0x3c

#define DEV_TYPE 1

#if defined (__cplusplus)
extern "C" {
#endif

    int lcd_dev_open();

    int lcd_dev_write(uint8_t* data, int len);

    void lcd_dev_close();


#if defined (__cplusplus)
}
#endif

