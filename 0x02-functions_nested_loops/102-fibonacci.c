#include "main.h"
#include <stdio.h>

/**
 * main - main function
 *
 * Description: prints the first 50 fibonacci numbers
 *
 * Return: always 0
 */

int main(void)
{
	int count;
	unsigned long f1 = 0, f2 = 1, total;

	for (count = 0 ; count < 50 ; count++)
	{
		total = f1 + f2;
		printf("%lu", total);

		f1 = f2;
		f2 = total;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
