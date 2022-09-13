#include "putchar.h"

/**
  *main -  Print "putchar" followed by a new line.
  *
  *Description: You are not allowed to include standard libraries.
  *Return: 0
  */
int main(void)
{
	char putchar[] = "_putchar";
	int i = 0;

	while (putchar[i] != '\0')
	{
		_putchar(putchar[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
