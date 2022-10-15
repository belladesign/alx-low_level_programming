#include <stdio.h>

/**
 * main - Prints numbers from 0 to 9.
 *
 * Return: Always 0  (Success)
 */
int main(void)
{
	char num[9] = "0123456789";
	int i;

	for (i = 0; i < 9; i++)
	{
		putchar(num[i]);
	}
	putchar('\n');
	return (0);
}
