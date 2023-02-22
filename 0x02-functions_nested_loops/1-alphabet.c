#include "main.h"
/**
 * print_alphabet - a program that prints the alphabet
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}

