#include "main.h"


/**
 * _strcat - function that concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int ls, ld;

	ld = _strlen(dest);
	ls = _strlen(src) - 1;

	while (ls >= 0)
	{
		*(dest + ld + ls) = *(src + ls);
		ls--;
	}
	*(dest + _strlen(dest)) = '\0';

	return (dest);
}
