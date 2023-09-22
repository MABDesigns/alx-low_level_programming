#include "main.h"
/**
 * _strncat - functin
 * @dest: pointer
 * @src: pointer
 * @n: input
 * Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
int count = 0;
int count2 = 0;
while (*(dest + count) != '\0')
{
count++;
}
while (count2 < n)
{
*(dest + count) = *(src + count2);
if (*(src + count2) == '\0')
break;
count++;
count2++;
}
return (dest);
}
