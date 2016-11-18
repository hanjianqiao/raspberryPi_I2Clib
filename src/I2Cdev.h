#ifndef _I2CDEV_H_
#define _I2CDEV_H_

#define I2C_OK 0
#define I2C_ERR -1

#ifdef __cplusplus
extern "C" {
#endif

	int8_t readBitW(uint8_t devAddr, uint8_t regAddr, uint8_t bitNum, uint16_t *data);
        int8_t readBits(uint8_t devAddr, uint8_t regAddr, uint8_t bitStart, uint8_t length, uint8_t *data);
        int8_t readBitsW(uint8_t devAddr, uint8_t regAddr, uint8_t bitStart, uint8_t length, uint16_t *data);
        int8_t readByte(uint8_t devAddr, uint8_t regAddr, uint8_t *data);
        int8_t readWord(uint8_t devAddr, uint8_t regAddr, uint16_t *data);
        int8_t readBytes(uint8_t devAddr, uint8_t regAddr, uint8_t length, uint8_t *data);
        int8_t readWords(uint8_t devAddr, uint8_t regAddr, uint8_t length, uint16_t *data);

        int writeBit(uint8_t devAddr, uint8_t regAddr, uint8_t bitNum, uint8_t data);
        int writeBitW(uint8_t devAddr, uint8_t regAddr, uint8_t bitNum, uint16_t data);
        int writeBits(uint8_t devAddr, uint8_t regAddr, uint8_t bitStart, uint8_t length, uint8_t data);
        int writeBitsW(uint8_t devAddr, uint8_t regAddr, uint8_t bitStart, uint8_t length, uint16_t data);
        int writeByte(uint8_t devAddr, uint8_t regAddr, uint8_t data);
        int writeWord(uint8_t devAddr, uint8_t regAddr, uint16_t data);
        int writeBytes(uint8_t devAddr, uint8_t regAddr, uint8_t length, uint8_t *data);
        int writeWords(uint8_t devAddr, uint8_t regAddr, uint8_t length, uint16_t *data);

#ifdef __cplusplus
}
#endif

#endif /* _I2CDEV_H_ */
