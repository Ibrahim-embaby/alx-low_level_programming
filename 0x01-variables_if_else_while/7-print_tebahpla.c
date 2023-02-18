#include <stdio.h>
/**
 * main - a program to print the lowercase alphabet in reverse
 * Return: 0 (Success)
 */
int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	return (0);
}

