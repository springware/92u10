/* $Id: //depot/sw/releases/Aquila_9.2.0_U10.5/linux/kernels/mips-linux-2.6.31/arch/cris/arch-v10/drivers/i2c.h#1 $ */

int i2c_init(void);

/* High level I2C actions */
int i2c_writereg(unsigned char theSlave, unsigned char theReg, unsigned char theValue);
unsigned char i2c_readreg(unsigned char theSlave, unsigned char theReg);

/* Low level I2C */
void i2c_start(void);
void i2c_stop(void);
void i2c_outbyte(unsigned char x);
unsigned char i2c_inbyte(void);
int i2c_getack(void);
void i2c_sendack(void);



