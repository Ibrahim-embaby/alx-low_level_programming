#include "main.h"
/**
 * puts2 - a function that prints every other character of a string
 * @str: string
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		if (*(str + 1) == '\0')
		{
			return;
		}
		str = str + 2;
	}
	_putchar('\n');
}
