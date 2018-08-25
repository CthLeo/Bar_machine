#include "stdio.h"

void uart_init(void);
void key_init(void);
void key_polling(void);

int main(void)
{
	uart_init();
	key_init();
	
	key_polling();
	
	return 0;
}