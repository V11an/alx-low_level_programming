#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate random passwords
 * Return: 0
 */

int main(void)
{
	int a, sum, n;
	int pass[100];

	sum = 0;

	srand(time(NULL));

	for (a = 0; a < 100; a++)
	{
		pass[a] = rand() % 78;
		sum += (pass[a] + '0');
		putchar(pass[a] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}
