#include "main.h"
/**
 * rev_string - a function that reverses a string.
 * @s: the string to be reversed
 */
void rev_string(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	s--;
	len--;
	while (len >= 0)
	{
		_putchar(*s);
		s--;
		len--;
	}
	_putchar('\n');
}
