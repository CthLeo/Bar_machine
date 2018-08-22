#define GPJ0CON		0xe0200240
#define GPJ0DAT		0xe0200244

#define rGPJ0CON	*((volatile unsigned int *)GPJ0CON)
#define rGPJ0DAT	*((volatile unsigned int *)GPJ0DAT)

void delay(void);

//实现闪烁效果
void led_blink(void)
{
	//led初始化，把GPJ0CON设置为输出模式
	rGPJ0CON = 0x11111111;
	
	while(1)
	{
		//全亮
		rGPJ0DAT = ((0<<3) | (0<<4) | (0<<5));
		//延时
		delay();
		//全灭
		rGPJ0DAT = ((1<<3) | (1<<4) | (1<<5));
		//延时
		delay();
	}
}

void delay(void)
{
	volatile unsigned int i = 900000;	//volatile让编译器不要优化
	while(i--);
}
