#include <stdio.h>
#include <stdlib.h>

/**
 * main - ouputs the combination of four
 * digit numbers
 * Return: 0 SUCESS
 */

int main(void)
{
	int i, j, k, l;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				for (l = '0'; l <= '9'; l++)
				{
					if (j >= i)
					{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);

					if (j <= '8')
					{
						putchar(',');
						putchar(' ');
					}
					}
					}
				}
			}
		}

	putchar('\n');
	return (0);
}
