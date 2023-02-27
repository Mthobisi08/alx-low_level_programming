#include "main.h"

/**
 * rev_string -  prints a string in reverse
 *
 * @s: arg s
 *
 * Return: void
 */


void rev_string(char *s)
{
	int len = 0, index = 0;
	char tmp;

	for (index = len - 1; index >= len / 2; index--)
	{
	tmp = s[index];
	s[index] = s[len - index - 1];
	s[len - index - 1] = tmp;
	}
}