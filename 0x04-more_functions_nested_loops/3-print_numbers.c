#include "main.h"

/**
 * print_ numbers - prints 0123456789\n
 *
 * Return: void
 */

void print_numbers(void);

{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}


