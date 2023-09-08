#include <stdio.h>

/**
 *main - beginning
 *Description: task 3 of 0x01
 *Return: 0
 */
int main(void)
{
char test = 'a';
while (test <= 'z')
{
putchar(test);
test++;
}
test = 'A';
while (test <= 'Z')
{
putchar(test);
test++;
}
putchar('\n');
return (0);
}
