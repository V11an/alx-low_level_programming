#include <stdio.h>

/**
  * main - Print all combinations of digits
  *
  * Return: 0 (Success)
  */
int main(void)
{
	unsigned int number = 48;

	while (number <= 57)
	{
		putchar(number);
		if (number != 57)
		{
			putchar(',');
			putchar(' ');
		}
		number++;
	}
	putchar('\n');
	return (0);
}
