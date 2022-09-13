#include "main.h"

/**
  *print_alphabet - -a functionthat prints the alphabet,in lowecase
  *
  *Return: 0 (Success)
  */
void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
