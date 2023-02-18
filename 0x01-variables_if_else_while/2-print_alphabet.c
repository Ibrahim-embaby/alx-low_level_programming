#include <stdio.h>
/**
 * main - a program to print alphabet
 * Return: 0 (Success) 
 */
int main(void)
{
	char a = 'a';
	while(a <= 'z'){
		putchar(a);
		a++;
	}
	putchar("\n");
	return (0);
}

