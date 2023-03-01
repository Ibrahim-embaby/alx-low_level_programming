#include "main.h"
/**
 * string_toupper - a function that changes all lowercase letters of a string
 * to uppercase
 * @s: the string
 * Return: a pointer to the new string
 */
char *string_toupper(char *s)
{
	char *s1 = s;

	while (*s != '\0')
	{
		if (*s >= 'a' && *s <= 'z')
		{
			*s -= 32;
		}
		s++;
	}
	return (s1);
}
