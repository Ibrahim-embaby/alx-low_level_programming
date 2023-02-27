#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers.
 * @a: the first number
 * @b: the second number
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}