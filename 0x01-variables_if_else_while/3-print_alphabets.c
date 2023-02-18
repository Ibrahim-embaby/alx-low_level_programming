#include <stdio.h>
/**
 * main - a program to print the alphabet in lowercase, and then in uppercase
 * Return: 0 (Success)
 */
int main(void)
{
	char a = 'a';
	char b = 'A';

	while(a <= 'z')
	{
		putchar(a);
	}

	while (b <= 'Z')
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}

