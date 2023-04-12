#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *
 * Description: 'the program's description'
 * @str: describe the parameter
 *
 * Return: Always 0 (Success)
 */

char *_strdup(char *str)
{
if (str == NULL)
{
return (NULL);
}
    
char *dup_str = (char*)malloc(strlen(str) + 1);
    
if (dup_str == NULL)
{
return (NULL);
}
    
strcpy(dup_str, str);
    
return (dup_str);
free(dup_str);
}

