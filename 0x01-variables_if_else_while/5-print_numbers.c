#include <stdio.h>
/**
 * main - prints numbers 0-9
 * Return: 0 success
 */
int main(void)
{
	int x = 0;

	while (x <= 9)
	{
		printf("%d", x);
		x++;
	}
	printf("\n");
	return (0);
}
