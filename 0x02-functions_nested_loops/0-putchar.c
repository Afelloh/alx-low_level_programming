#include "main.h"
/**
  *main - Entry point
  *write a program that prints _putchar, followed by a new line.
  *Retuen: Alway 0 (Success)
  */
int main(void)
{
	char *ch = "_putchar";

	while (*ch)
	{
		_putchar(*ch);
		ch++;
	}
	_putchar('\n');
	return (0);
}
