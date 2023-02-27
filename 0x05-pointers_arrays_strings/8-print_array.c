#include "main.h"
#include <stdio.h>
/**
 * print_array - a function that prints n elements of an array of integers
 * @a: the array
 * @n: the number of elements of the array to be printed
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i <= (n - 1))
	{
		if (i == (n - 1))
		{
			printf("%s", a[i]);
		}
		else
		{
			printf("%s, ", a[i]);
		}
		i++;
	}
	_putchar('\n');
}
