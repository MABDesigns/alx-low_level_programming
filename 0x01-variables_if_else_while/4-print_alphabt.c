#include <stdio.h>
/**
 * main - Beginning
 * Description: task 4 0x01
 * Return: 0
 */
int main(void)
{
char test = 'a';
while (test <= 'z')
{
if (test != 'q' && test != 'e')
{
putchar(test);
}
test++;
}
putchar('\n');
return (0);
}
