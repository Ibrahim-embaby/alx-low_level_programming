#include "main.h"
/**
 * cap_string - a function that capitalizes all words of a string
 * @s: the string
 * Return: a pointer to the captilized string
 */
char *cap_string(char *s)
{
	char *s1 = s;

	if (*s >= 'a' && *s <= 'z')
	{
		*s -= 32;
	}
	while (*s != '\0')
	{
		if ((*(s - 1) == ' ' || *(s - 1) == '\n' || *(s - 1) == '.' || *(s - 1) == '\t' || *(s - 1) == ',' || *(s - 1) == ';' || *(s - 1) == '!' || *(s - 1) == '?' || *(s - 1) == '"' || *(s - 1) == '(' || *(s - 1) == ')' || *(s - 1) == '{' || *(s - 1) == '}') && (*s >= 'a' && *s <= 'z'))
		{
			*s -= 32;
		}
		s++;
	}
	return (s1);
}
