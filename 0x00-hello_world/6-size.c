#include <stdio.h>
/**
 * main - Program that prints the various types on computer
 * Return: (0) success
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of char: %d bytes(s)\n", (unsigned long)sizeof(a));
	printf("Size of int: %d bytes(s)\n", (unsigned long)sizeof(b));
	printf("Size of long int: %d bytes(s)\n", (unsigned long)sizeof(c));
	printf("Size of long long int: %d bytes(s)\n", (unsigned long)sizeof(d));
	printf("Size of float: %d bytes(s)\n", (unsigned long)sizeof(e));
	return (0);
}
