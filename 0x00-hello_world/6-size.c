#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("Size of char: %d byte(s)\n", sizeof(char));
       	printf("Size of int: %d byte(s)\n", sizeof(int));
       	printf("Size of float: %d byte(s)\n", sizeof(float));
       	printf("Size of double: %d byte(s)\n", sizeof(double));
       	printf("Size of long: %d byte(s)\n", sizeof(long));
	printf("Size of long long: %d byte(s)\n", sizeof(long long));
	return 0;
}
