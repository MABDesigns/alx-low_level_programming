#include <stdio.h>
/**
 * main - beginning
 * Description: task 10 0x01
 * Return: 0
 */
int main(void)
{
int a;
int b;
int c;
int n = 100;
int m = 10;
int o = 89;
a = 0;
while (a < n)
{
b = a % m;
c = a / m;
if (c < b)
{
putchar(c + '0');
putchar(b + '0');
if (a < o)
{
putchar(44);
putchar(32);
}
}
a++;
}
putchar('\n');
return (0);
}
