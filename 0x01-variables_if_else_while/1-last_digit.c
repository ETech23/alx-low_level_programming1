#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints last digit of number
 * Return: 0 Success
 */
int main(void)
{
int n;
int nm;
nm = n % 10;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is %d", n, nm);
if (nm > 5)
{
	printf("and is greater than 5");
}
else if (nm == 0)
{
	printf("and is 0");
}
else if ((nm < 6) != 0)
{
	printf("and is less than 6 and not 0");
}
return (0);
}
