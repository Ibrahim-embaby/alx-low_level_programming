#include "main.h"
/**
 * islower - a function that checks for lowercase character
 * Return: 1 (lowercase) or 0 (otherwise)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);

	}
}
