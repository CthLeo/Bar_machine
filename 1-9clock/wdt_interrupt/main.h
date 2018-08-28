#ifndef __MAIN_H__
#define __MAIN_H__

// main.h就是用来存放各个外设的操作函数的声明的

// uart.c
void uart_init(void);

// wdt.c
void wdt_init_interrupt(void);
void isr_wdt(void);















#endif



















