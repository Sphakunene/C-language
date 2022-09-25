#include <stdio.h>

/**
 * swap_int - swap the intgers
 *@a:  value to be swapeed
 *@b : value to be swaped
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
