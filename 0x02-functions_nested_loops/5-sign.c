#include "main.h"

/*
 * print_sign - determine if the input number is greater, equal or less than zero
 *
 * @n: The input number as an integer
 * Return: 1 is greater than zero. 0 is zero or -1 is less than zero
 * using the ASCII standard
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
