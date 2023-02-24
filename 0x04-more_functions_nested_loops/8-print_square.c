#include "main.h"
/**
 * print_square - a function that prints a square, followed by a new line
 * @size: the size of the square
 * Return: void
 */
void print_square(int size)
{
	for (int i = 1; i <= size; i++)
	{
		for (int j = 1; j <= size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
