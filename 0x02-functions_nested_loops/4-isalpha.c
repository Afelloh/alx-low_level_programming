#include "main.h"
/**
  *_isalpha - check if character if is an alphabetic character.
  *@c: typ int character
  *Return: 1 if lowercase, lowercase or uppercase, and 0 otherwise
  */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
