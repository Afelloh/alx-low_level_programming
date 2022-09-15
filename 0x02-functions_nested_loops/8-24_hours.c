#include "main.h"
/**
  *jack _bauer -  fuction that prints every minutes of the day, 24 hour clock
  *h = hour, m = minutes
  * / 10 allowssecond digits to rotate
  *for loop breaks before passing 24:00
  *Description: Starts with 00:00 to 23:59
  *Return: 24 hour clock line by line
  */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
