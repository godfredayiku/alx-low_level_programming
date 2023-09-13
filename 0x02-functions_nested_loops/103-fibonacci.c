#include "main.h"
#include <stdio.h>

/**
 * main - main function
 *
 * Description: prints the sum of even-valued terms
 *
 * Return: always 0
 */

int main(void)
{
	unsigned long f1 = 0, f2 = 1, total;
	float grand_total;

	while (1)
	{
		total = f1 + f2;

		if (total > 4000000)
			break;

		if ((total % 2) == 0)
			grand_total += total;

		f1 = f2;
		f2 = total;
	}
	printf("%.0f\n", grand_total);

	return (0);
}
