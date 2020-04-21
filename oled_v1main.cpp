#include "stm32f10x.h"                  // Device header
#include <stdio.h>
#include "stdlib.h"
#include "ssd1306.h"
#define delay for(int i=0;i>10000;i++)



int main(void)
{
	
SSD1306_Init();

	delay;
	
	while(1)
	{
	
		SSD1306_GotoXY(0, 44);
		for(int i = 0;i<136;i++)
		{
			
					SSD1306_Fill(SSD1306_COLOR_BLACK);
					SSD1306_DrawCircle(i, 56, 7, SSD1306_COLOR_WHITE);
					SSD1306_GotoXY(30,4);
					SSD1306_Puts("STM32F103C8", &Font_7x10, SSD1306_COLOR_WHITE);
					SSD1306_GotoXY(40,22);
					SSD1306_Puts("By GrunF", &Font_7x10, SSD1306_COLOR_WHITE);
			   SSD1306_DrawRectangle(128-i,36,8,8,SSD1306_COLOR_WHITE);
					SSD1306_UpdateScreen();   
			
	                                  
		}
	}

}
