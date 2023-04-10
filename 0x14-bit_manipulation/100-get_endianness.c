#include "main.h"

/**
 * main - Checking the endianness.
 *
 * Return: zero
 */
int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;

	if (*endian == 1)
		return (1);

	return (0);
}
