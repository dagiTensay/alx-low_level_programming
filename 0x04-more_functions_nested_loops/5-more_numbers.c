#include "main.h"

/**
 *more_numbers - prints the digits from 0 to 14 ten times
 *Return: void
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			_putchar(j + 48);
		}
		_putchar('\n');
	}
}
