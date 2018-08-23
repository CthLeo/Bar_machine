//#include "stdio.h"

int main(void)
{
	uart_init();
	key_init();
	
	key_polling();
	
	return 0;
}