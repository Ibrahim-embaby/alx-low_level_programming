#include <stdio.h>
/**
 * main - a program to print the alphabet except two letters
 * Return: 0 (Success)
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a == 'e' || a == 'q')
		{
			continue;
		}
		else
		{
			putchar(a);
		}
		a++;
	}
	return (0);
}

