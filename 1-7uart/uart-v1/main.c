

void delay(void);

void main(void)
{
	uart_init();
	
	while(1)
	{
		uart_putc('c');
		delay();
	}
}

void delay(void)
{
	volatile unsigned int i = 900000;		// volatile 让编译器不要优化，这样才能真正的减
	while (i--);							// 才能消耗时间，实现delay
}