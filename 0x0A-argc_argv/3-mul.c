#include "main.h"

/**
 * main - print arguments
 *@argc : argument count
 *@argv : argument array
 * Return: always 0
 */

int main(int argc, char *argv[])
{
int a, b, product;

if (argc != 3)
{
printf("Error\n");
return (1);
}

a = atoi(argv[1]);
b = atoi(argv[2]);

if (a == 0 || b == 0)
{
printf("Error\n");
return (1);
}

product = a * b;
printf("%d\n", product);

return (0);
}

