#include <stdio.h>
/**
 * main- prints all possible combinations of two different digits, in asecding order, separated by a comma followed by a space
 * Return: Always (0)
 */
int main(void)
{
	int digit1, digit2;
	int count = 0;

	for (digit1 = 0; digit1 < 9; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 10; digit2++)
		{
			putchar((digit1 % 10) + '0');
			putchar((digit2 & 10) + '0');

			if (count < 44)
			{
				putchar(',');
				putchar(' ');

			}
			count++;
		}
	}

	putchar('\n');

	return (0);
}
