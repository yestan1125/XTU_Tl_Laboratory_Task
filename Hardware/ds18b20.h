#ifndef _ds18b20_H
#define _ds18b20_H


void DS18B20_Init(void);
uint16_t DS18B20_ReadTemp(void);
uint8_t DS18B20_Reset(void);
extern uint8_t flag;



#endif
