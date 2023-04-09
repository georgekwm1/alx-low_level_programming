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
int mul = 1;

if (argc > 1 && argc <= 3)
{
while (i < argc)
{
mul = mul * (atoi(argv[i + 1]));
i++;
if (i == 2)
printf("%d\n", mul);
}
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
