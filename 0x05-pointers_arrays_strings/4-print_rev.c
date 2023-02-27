#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse
 * @s: the string to be printed
 */
void print_rev(char *s)
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
