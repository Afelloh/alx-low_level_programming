#include "main.h"

/**
  *main -  entry point
  *
  *Description: You are not allowed to include standard libraries.
  *Return: 0
  */
int main(void)
{
	char *sh = "_putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}
