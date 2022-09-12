#include <stdio.h>
#include <ctype.h>
/**
 * main - prints lower and upper case alphabet
 * Return: 0 Success
 */

int main(void)
{
	char x = 'a';
	char X = 'A';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	while (X <= 'Z')
	{
		putchar(X);
		X++;
	}
	putchar('\n');
	return (0);
}
