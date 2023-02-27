#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse
 * @s: the string to be printed
 */
void print_rev(char *s)
{
	int len = _strlen(s);
	char *k = s + len - 1;

	while (k != s)
	{
		_putchar(*k);
		k--;	
	}
	_putchar('\n');
}
