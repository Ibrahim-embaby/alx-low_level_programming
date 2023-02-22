#include "main.h"
/*
 * print_alphabet_x10 - a program that prints 10 times the alphabet
 * Return: void
 */
void print_alphabet_x10(void)
{
	char a = 'a';
	int i = 0;

	while (i <= 9)
	{
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		a = 'a';
		i++;
	}
}
