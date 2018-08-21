 #define GPJ0CON 0xE0200240
 #define GPJ0DAT 0xE0200244
 
 .global _start
 _start:
	//第一步：把所有引脚设置为输出模式
	ldr r0, =0x11111111
	ldr r1, =GPJ0CON
	str r0,[r1]
	
flash:	
	//第二步：全部点亮
	ldr r0, =((0<<3) | (0<<4) | (0<<5))
	ldr r1,=GPJ0DAT
	str r0,[r1]
	
	//第三步：延时
	bl delay
	
	//第四步：全部熄灭
	ldr r0, =((1<<3) | (1<<4) | (1<<5))
	ldr r1, =GPJ0DAT
	str r0,[r1]
	
	//第五步：延时
	bl delay
	
	b flash
	
//延时函数
delay:
	ldr r2, =9000000
	ldr r3, =0x0
delay_loop:
	sub r2, r2, #1		//r2 = r2 - 1
	cmp r2, r3			//cmp会影响Z标志位，如果r2等于r3则Z=1，跳过bne，否则执行bne
	bne delay_loop
	mov pc, lr			//函数调用返回
