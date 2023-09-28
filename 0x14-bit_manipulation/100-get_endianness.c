#include "main.h"

/**
 * get_endianness - check if machine is a little or a big endian
 * Return: 0 for big, 1 for little
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
