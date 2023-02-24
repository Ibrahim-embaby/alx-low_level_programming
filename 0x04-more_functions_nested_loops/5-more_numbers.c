#include "main.h"
/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 * Return: void
 */
void more_numbers(void)
{
	int c = 0;
	int n = 0;

	while (c <= 9)
	{
		while (n <= 14)
		{
			if (n >= 10)
			{
				_putchar('1');
			}
			_putchar(n % 10 + '0');
			n++;
		}
		_putchar('\n');
		c++;
	}
}
