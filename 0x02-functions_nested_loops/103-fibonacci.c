#include <stdio.h>
/**
 * main - beginning
 * Return: 0
 */
int main(void)
{
long int i, a = 1, b = 2, sum = 0, totalSum = 0;
for (i = 0; i < 49; i++)
{
if ((b % 2 == 0) && (b <= 4000000))
{
totalSum = totalSum + b;
}
sum = a + b;
a = b;
b = sum;
}
printf("%ld\n", totalSum);
return (0);
}
