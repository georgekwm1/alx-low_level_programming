#include "main.h"

/**
 * more_numbers - checks for checks for a digit (0 through 9).
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
int c, n;

for (c = 0; c <= 9; c++)
{
for (n = 0; n <= 14, n++)
{
if (n > 9)
_putchar(c / 10 + '0');
_putchar(n % 10 + '0');
}
_putchar('\n');
}
}
