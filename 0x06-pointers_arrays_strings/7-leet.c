#include "main.h"
/**
 * leet - a function that encodes a string
 * @s: the string
 * Return: a pointer to the encoded string
 */
char *leet(char *s)
{
	char *s1 = s;

	while (*s != '\0')
	{
		if (*s == 'a' || *s == 'A')
		{
			*s = '4';
		}
		else if (*s == 'e' || *s == 'E')
		{
			*s = '3';
		}
		else if (*s == 'o' || *s == 'O')
		{
			*s = '0';
		}
		else if (*s == 't' || *s == 'T')
		{
			*s = '7';
		}
		else if (*s == 'l' || *s == 'L')
		{
			*s = '1';
		}
		s++;
	}
	return (s1);
}
