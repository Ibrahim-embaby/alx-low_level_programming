#include "main.h"
/**
 * rev_string - a function that reverses a string.
 * @s: the string to be reversed
 */
void rev_string(char *s)
{
	char *k = s;
	char *d = s;

	if (s == '\0')
	{
		return;
	} else
	{
		while (*s != '\0')
		{
			s++;
		}
		s--;
		while (k != s)
		{
			char tmp = *s;
			char *c = s;

			while (c != k)
			{
				*c = *(c - 1);
				c--;
			}
			*k = tmp;
			k++;
		}
		s = d;

	}
}
