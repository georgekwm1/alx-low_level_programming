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
char letter;

for (letter = 'z' ; letter >= 'a' ; --letter)
putchar(letter);
putchar('\n');
return (0);
}
