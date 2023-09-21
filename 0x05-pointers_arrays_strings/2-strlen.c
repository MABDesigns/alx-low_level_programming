#include "main.h"
/**
 * _strlen - function
 * @s: input
 * Return: result
 */
int _strlen(char *s)
{
int count = 0;
while (*(s + count) != '\0')
count++;
return (count);
}
