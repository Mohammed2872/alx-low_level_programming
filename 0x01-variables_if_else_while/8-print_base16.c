#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Hexadecimal
 *
 * Return: 0
*/

int main(void)
{
	char ch = 'a';
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + 48);
		digit++;
	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
