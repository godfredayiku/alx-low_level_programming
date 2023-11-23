#include "main.h"

/**
 * _pow - func calculates (base ^ power)
 * @base: base of the exponent
 * @power: power of the exponent
 * Return: value of (base ^ power)
*/

unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int number;
	unsigned int x;

	number = 1;
	for (x = 1; x <= power; x++)
		number *= base;
	return (number);
}

/**
 * print_binary - prints a number in binary notation
 * @y: number to print
 * Return: void
*/

void print_binary(unsigned long int y)
{
	unsigned long int divisor, check;
	char flag;

	flag = 0;
	divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check = y & divisor;
		if (check == divisor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}
