#include <stdio.h>

/**
 * main - Prints numbers betwenn 0 and 9 and letters between a and f
 *
 * Return: Always 0 ()Success)
 */
int main(void)
{
	int i;

	for (i=40; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
