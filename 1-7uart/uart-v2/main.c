#include "stdio.h"

void uart_init(void);

int main(void)
{
	uart_init();
	
	int a = 199676;
	putc('a');
	putc('b');
	putc('c');
	while (1)
	{
		printf("test for printf, a = %d.\n", a);
	}
	
	/*
	while(1)
	{
		uart_putc('a');
		delay();
	}
	*/
	return 0;
}