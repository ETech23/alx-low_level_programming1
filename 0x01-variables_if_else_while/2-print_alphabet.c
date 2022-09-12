#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - prints lowercase alphabets
 * Return: 0 Success
 */
int main(void)
{
	for (int x = 'A'; x <= 'z'; x++)
	{
		x = tolower(x);
		putchar(x);
	}
	return (0);
}
