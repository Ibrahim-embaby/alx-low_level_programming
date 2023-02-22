#include "main.h"
/**
 * main - a program that prints the alphabet
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
	return (0);
}

