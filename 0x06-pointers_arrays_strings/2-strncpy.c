#include "main.h"
/**
 * _strncpy - a function that copies a string
 * @dest: the dest string
 * @src: the src string
 * @n: number of bytes
 * Return: a pointer to a string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c = 0;
	char *s = dest;

	while (c < n && *src != '\0')
	{
		*dest = *src;
		c++;
		src++;
		dest++;
	}
	dest = s;
	return (s);
}
