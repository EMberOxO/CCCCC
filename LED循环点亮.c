#include<reg52.h>
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
P1=0xfe;//11111110
light();
P1=0xfd;//11111101
light();
P1=0xfb;//11111011
light();
P1=0xf7;//11110111
light();

P1=0xef;//11101111
light();
P1=0xdf;//11011111
light();
P1=0xbf;//10111111
light();
P1=0x7f;//01111111
light();

P1=0xbf;//10111111
light();
P1=0xdf;//11011111
light();
P1=0xef;//11101111
light();

P1=0xf7;//11110111
light();
P1=0xfb;//11111011
light();
P1=0xfd;//11111101
light();
	}
}
