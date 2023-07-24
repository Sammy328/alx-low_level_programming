#include "main.h"

/**
 * char *_stropy - a function that copies the string pointed to by src
 * @dest: copy
 * @src: copy from
 * Return: string
 */
char *_stropy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + 1) != '\0')
	{
		l++;
	}
	for ( ; x < 1 ; x++)
	{
		dest[x] = src[x];
	}
	dest[1] = '\0';
	return (dest);
}
