#include "main.h"

/**
 * _islower - checks if the character is lowercase
 *
 * @c: parameter for the function
 *
 * Return: returns 0 or 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
