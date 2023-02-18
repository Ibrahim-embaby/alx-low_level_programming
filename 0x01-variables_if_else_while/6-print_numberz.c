#include <stdio.h>
/**
 * main - a program to print all digits
 * Return: 0 (Success)
 */
int main(void)
{
	char a = '0';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}

