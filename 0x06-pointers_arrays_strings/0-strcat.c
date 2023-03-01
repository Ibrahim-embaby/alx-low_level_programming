#include "main.h"
/**
 * _strcat - a function that concatenates two strings
 * @dest: the dest string
 * @src: the src string
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *s = dest;

        while (*dest != '\0')
        {
                dest++;
        }

        while (*src != '\0')
        {
                *dest = *src;
                dest++;
                src++;
        }
        return (s);
}
