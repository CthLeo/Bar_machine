void uart_init(void);
void timer2_pwm_init(void);
void delay(void);
void putc(char c);

int main(void)
{
	uart_init();
	
	timer2_pwm_init();
	
	while(1)
	{
		putc('a');
		delay();
	}
	
	return 0;
}

void delay(void)
{
	volatile unsigned int i = 900000;
	while(i--);
}