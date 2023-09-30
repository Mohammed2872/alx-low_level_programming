#include "main.h"

/**
 * print_line - print space _
 * @n: _that printed
 * Return: 0
*/

void print_line(int n)
{
	int inchr;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (inchr = 1; inchr <= n; inchr++)
			_putchar(95);
		_putchar('\n');
	}
}
