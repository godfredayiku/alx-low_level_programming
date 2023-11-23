#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - This prog sets the value of a bit to 0 at a given index
 * @a: parameter
 * @index: index
 * Return: 1 if success, -1 if error
*/

int clear_bit(unsigned long int *a, unsigned int index)
{
	if (index > sizeof(a) * 8)
		return (-1);
	*a &= ~(1 << index);
	return (1);
}
