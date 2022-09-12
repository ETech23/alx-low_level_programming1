#include <stdio.h>
/**
 * main - prints number 0-1 using putchar
 * Return: 0 success
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
