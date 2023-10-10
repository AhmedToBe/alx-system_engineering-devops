#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - ssss
 *
 * Description: sssss
 *
 * Return: ssssss
*/
int main(void)
{
	int n;
int lstDgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

lstDgt = n % 10;

printf("Last digit of %d is %d", n, lstDgt);

if (lstDgt > 5)
{
printf(" and is greater than 5\n");
}
else if (lstDgt < 6 && lstDgt != 0)
{
printf(" and is less than 6 and not 0\n");
}
else
{
printf(" and is 0\n");
}


	return (0);
}