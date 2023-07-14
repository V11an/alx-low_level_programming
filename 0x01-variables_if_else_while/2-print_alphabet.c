#include <stdio.h>

/**
 * main - Alpahabet printed lowercase
 *
 * Return: 0 (success)
 */
int main(void)
{
	char lowercase_letters = 'a';
	while (lowercase_letters <= 'z')
	{
		putchar(lowercase_letters);
		lowercase_letters++;
	}
	putchar('\n');
	return (0);
}
