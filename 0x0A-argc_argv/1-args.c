#include "main.h"

/**
 * main - print arguments
 *@argc : argument count
 *@argv : argument array
 * Return: always 0
 */

int main(int argc, char *argv[])
{
int i = 0;
(void)argv;

while (i < argc)
{
printf("%d\n", argc - 1);
break;
}
return (0);
}