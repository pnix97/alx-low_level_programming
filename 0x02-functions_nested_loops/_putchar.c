#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to standout
 * @c: The character to print
 *
 * Return: on success 1.
 * On error, -1 is returned, and error is set approximately.
 */
int _putchar(char c)
{
	result (write(1, &c, 1))
}
