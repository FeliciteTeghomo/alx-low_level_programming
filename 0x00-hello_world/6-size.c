#include <stdio.h>
/**
 * main - Write a C program that prints the size of various types
 *Return: 0
 */
int main(void)
{
	printf("Size of a char: %c byte(s)\n", sizeof(char));
	printf("Size of int: %d byte(s)\n", sizeof(int));
	printf("Size of long int: %d byte(s)\n", sizeof(long int));
	printf("Size of long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of float: %f byte(s)\n", sizeof(float));
	return (0);
}
