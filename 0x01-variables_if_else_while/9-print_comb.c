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

	while (n1 <= 9)
	{
		putchar(n1);

		if (n1 != 9)

		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
