#include <stdio.h>

/**
  * main - Print lowercase and uppercase alphabets
  *
  * Return: 0 (Success)
  */
int main(void)
{
	char lowercase_alphabet = 'a';
	char uppercase_alphabet = 'A';

	while (lowercase_alphabet <= 'z')
	{
		putchar(lowercase_alphabet);
		lowercase_alphabet++;
	}
	while (uppercase_alphabet <= 'Z')
	{
		putchar(uppercase_alphabet);
		uppercase_alphabet++;
	}
	putchar('\n');
	return (0);
}
