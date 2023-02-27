#include "main.h"
/**
 * puts_half - function that prints half of a string
 * @str: string
 */
void puts_half(char *str)
{
	int len = 0;
	char *tmp = str;
	int i;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	str = tmp;
	if (len % 2 == 1)
	{
		i = ((len - 1) / 2) + 1;
	}
	else
	{
		i = len / 2;
	}
	while (i <= len - 1)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
