#include "main.h"
/**
 * _strncat - a function that concatenates two strings
 * @dest: the dest string
 * @src: the src string
 * @n: number of bytes
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int c = 0;
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && c < n)
	{
		*dest = *src;
		src++;
		dest++;
		c++;
	}
	return (s);
}
