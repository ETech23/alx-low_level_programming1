#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - prints lowercase alphabets
 * Return: 0 Success
 */
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	return (0);
}
