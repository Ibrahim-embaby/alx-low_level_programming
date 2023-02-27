#include "main.h"
/**
 * _strcpy - a function that copies the string pointed to by src
 * to the buffer pointed to by dest
 * @dest: the destination
 * @src: the source string
 * Return: the destination
 */
char *_strcpy(char *dest, char *src)
{
	char *tmp = dest;

	do {
		*tmp = *src;
		tmp++;
		src++;
	} while (*src != '\0');
	return (dest);
}
