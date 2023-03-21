#include "main.h"
/**
 * _islower - check if char is lowercase
 * @c: is the char to be checked
 * Return: 1 if char is lowercase, otherwise 0.
 */
int _islower(int c)
{
int i;
for (i = 'a' ; i <= 'z' ; i++)
{
if (i == c)
return (1);
}
return (0);
}
