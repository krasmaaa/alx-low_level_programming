#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int i)
{
i %= 10;
if (i < 0)
i *= -1;
i += 48;
_putchar(i);
return (i - '0');
}
