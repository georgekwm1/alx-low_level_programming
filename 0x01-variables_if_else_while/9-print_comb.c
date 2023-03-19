#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Description: 'the program's description'
 * : describe the parameter
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j;

for (i = 0 ; i < 10 ; i++)
{
for (j = 0 ; j < 10 ; j++)
{
putchar(i + '0');
putchar(j + '0');
putchar(',');
putchar(' ');
}

}
return (0);
}
