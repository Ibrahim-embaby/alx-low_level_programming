#include "main.h"
/**
 * _strcmp - a function that compares two strings
 * @s1: the first string
 * @s2: the second string
 * Return: a number 0 if equal 
 * <0 if the first non-matching character in s1 is lower than that of s2
 * >0 if the first non-matching character in s1 is greater than that of s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (0);
	}
	else
	{
		if (s1[0] > s2[0])
		{
			return (15);
		}
		else
		{
			return (-15);
		}
	}
}
