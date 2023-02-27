#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 * @s: the string
 */
int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		s++;
		c++;
	}
	return c;
}
