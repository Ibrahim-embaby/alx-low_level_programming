#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers except 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
	char n = '0';

	while (n <= '9')
	{
		if ((n == '2') || (n == '4'))
		{
			n++;
			continue;
		}
		else
		{
			_putchar(n);
			n++;
		}
	}
	_putchar('\n');
}
