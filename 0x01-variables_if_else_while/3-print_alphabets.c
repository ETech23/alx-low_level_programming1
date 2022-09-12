#include <stdio.h>
#include <ctype.h>
/**
 * main - prints lower and upper case alphabet
 * Return: 0 Success
 */

int main(void)
{
	char x = 'a';
	char X = 'Z';

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
	return (0);
}
