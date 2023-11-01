#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: destination string
 *
 * @src: source string
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int d_len = 0;
	int s_len = 0;
	int i;

	for (i = 0 ; dest[i] != '\0' ; i++)
		d_len++;
	for (i = 0 ; src[i] != '\0' ; i++)
		s_len++;

	for (i = 0 ; i <= s_len ; i++)
		dest[d_len + i] = src[i];
	return (dest);
}
