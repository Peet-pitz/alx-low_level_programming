#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverse an array
 *
 */
void reverse _array(int *a, int n)
{
	int temp, counter;

	n = n - 1;
	counter = 0;
	while (counter <= n)
	{
		temp = a[counter];
		a[counter++] =a[n];
		a[n--] = temp;
	}
}

