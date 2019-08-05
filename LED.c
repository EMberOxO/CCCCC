#include<reg52.h>

sbit LED0=P1^0;
sbit LED1=P1^1;
sbit LED2=P1^2;
sbit LED3=P1^3;
sbit LED4=P1^4;
sbit LED5=P1^5;
sbit LED6=P1^6;
sbit LED7=P1^7;

void light()
{
	int i=0;
	for(i=0;i<30000;i++){
	}
}


void main(void)
{
while(1)
	{
LED0=0;
light();
LED0=1;
light();
LED1=0;
light();
LED1=1;
light();
LED2=0;
light();
LED2=1;
light();
LED3=0;
light();
LED3=1;
light();
LED4=0;
light();
LED4=1;
light();
LED5=0;
light();
LED5=1;
light();
LED6=0;
light();
LED6=1;
light();
LED7=0;
light();
LED7=1;
light();

	}
}