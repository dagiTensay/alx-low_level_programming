#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the digonal elemnts
 * of a given matrix
 * @a: the give matrix
 * @size: the size of the matrix
 * Return:noting
 */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + (i * size + i));
		sum2 += *(a + (size * i + size - 1 - i));
	}
	printf("%d, %d\n", sum1, sum2);
}
