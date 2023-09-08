#include <stdio.h>
/**
 * main - beginning
 * Description: task 9 0x01
 * Return: 0
 */
int main(void)
{
int n = 0;
while (n < 10)
{
putchar(n + '0');
if (n < 9)
{
putchar(44);
putchar(32);
}
n++;
}
putchar('\n');
return (0);
}
