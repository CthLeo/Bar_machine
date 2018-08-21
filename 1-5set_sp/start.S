/*
 * 文件名：start.s
 * 作者： 陈探鸿
 * 描述： 演示汇编关开门狗，设置栈，并且调用C语言来点亮LED
 */
 
 #define WTCON		0xe2700000
 #define SVC_STACK	0xd0037d80
 
 .global _start
 _start:
	//关开门狗
	ldr r0, =WTCON
	ldr r1, =0x0
	str r1, [r0]
	
	//设置SVC模式的满减栈
	ldr sp, =SVC_STACK
	
	//调用C程序
	bl led_blink
	
	//最后的死循环必须有
	b .