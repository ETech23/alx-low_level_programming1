#include <stdio.h>
/**
 * main - prints lower case alphabets except e and q
 * Return: 0 success
 */
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		if (x != 'e' && x != 'q')
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
	/*The main prints lowercase alphabet skipping "e" and "q" using loop method*/

