#include "main.h"

/**
  *_memset - Fill memory with a constant byte
  *@s: mamory area to fill
  *@b: constant byte to fill
  :@n: bytes of memory area to fill
  *
  *Return: the memory area filled
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int n;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
