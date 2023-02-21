#include "main.h"
/**
 * main - Prints putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char cinell[] = "_putchar";
	int i = 0;

	while (cinell[i] != '\0')
	{
		_putchar(cinell[i]);
		i++;
	}
	_putchar('\n');

	return (0);
