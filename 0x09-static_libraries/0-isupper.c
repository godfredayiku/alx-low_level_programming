#include "main.h"

/**
 * _isupper - this function checks for uppercase character
 *
 * @c: function parameter
 *
 * Return: returns 1 when successful and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
