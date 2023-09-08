#include <stdio.h>

/**
 * main - this is the main function
 * Return: returns 0 when successful
 */

int main(void)
{
	printf("Size of a char: %u byte(s)\n", sizeof(char));
	printf("Size of int: %u byte(s)\n", sizeof(int));
	printf("Size of a long int: %u byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %u byte(s)\n", sizeof(long long int));
	printf("Size of a float: %u byte(s)\n", sizeof(float));
	return (0);
}
