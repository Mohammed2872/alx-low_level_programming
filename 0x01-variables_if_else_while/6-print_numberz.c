#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print digits
 *
 * Return: 0
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + 48);
		digit++
	}
	putchar('\n')
	return (0);
}