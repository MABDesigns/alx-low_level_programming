#include <stdio.h>

/**
 * main - Beginning
 * 
 * Description: task 6 0x00-hello_world
 *
 * Return: 0
 */
int main(void)
{
int a;
long int b;
long long int c;
char d;
float f;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long long: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
