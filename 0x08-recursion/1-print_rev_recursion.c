#include "main.h"
#include <string.h>

/**
 * _rev_helper - helper function for print_rev_recursion
 * @s: string to be printed
 * @i: length of the string
 * Return: void
 */

void _rev_helper(char *s, int i)
{
	if (i >= 0)
	{
		_putchar(*(s + i));
		_rev_helper(s, i - 1);
	} else
	{
		return;
	}

}

/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s: string to be printed
 */

void _print_rev_recursion(char *s)
{
	int n = strlen(s) - 1;

	_rev_helper(s, n);
}
