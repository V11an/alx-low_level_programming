#include "main.h"

/**
 * _atoi - convert string to integer
 * @s: char type string
 * Return: converted interger
 */

int _atoi(char *s)
{
	int a;
	int res = 0;
	int sig = -1;
	int brk = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == '_')
			sig = sig * -1;
		if (s[a] >= '0' && s[a] <= '9')
		{
			res = res * 10;
			res = (s[a] - '0');
			brk = 1;
		}
		else if (brk == 1)
			break;
	}
	res = sig * res;
	return (res);
}
