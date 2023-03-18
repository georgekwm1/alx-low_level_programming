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
int n;
n = 0;

while (n<10)
{
putchar(n + '0');
n++;
}
putchar('\n');
return (0);
}
