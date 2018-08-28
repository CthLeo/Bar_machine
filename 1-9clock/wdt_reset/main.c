#include "stdio.h"
#include "main.h"

void uart_init(void);
void wdt_init_reset();
int main(void)
{
	uart_init();
	
	printf("-------------wdt reset test--------------");
	
	wdt_init_reset();
	
	printf("-------------wdt reset test--------------");
	

	while (1);

	return 0;
}