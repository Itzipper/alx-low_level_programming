#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: print
 *
 * Return: 0
 */
int main(void)
{
	int n1 = 0;

	while (n1 <= 48)
	{
		putchar(n1 + 48);

		if (n1 != 58)

		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
