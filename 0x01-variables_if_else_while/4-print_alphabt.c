#include <stdio.h>
/* more headers goes there */
#include <stdlib.h>
#include <time.h>
/* betty style doc for function main goes there */

int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
if (letter != 'q' && letter != 'e')
{
putchar(letter);
}
letter++;
}
putchar('\n');
return (0);
}
