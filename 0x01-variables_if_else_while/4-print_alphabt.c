#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print alphapet except a e
 *
 * Return: 0
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++
		putchar(ch);
		ch++
	}
	putchar('\n')
	return (0);
}
