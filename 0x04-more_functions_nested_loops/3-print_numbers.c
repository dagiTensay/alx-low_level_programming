#include "main.h"
#include <stdio.h>


/**
 * print_numbers - prints the digit form 0 to 9
 * Return: no return
 */


void print_numbers(void)
{
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + 48);
	}
	_putchar('\n');
}
