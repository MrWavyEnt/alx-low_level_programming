#include "main.h"

/**
 * _strncat - the function name
 * @dest: function parameter one
 * @*src: parameter two
 * @n: parameter three
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
int i;
int j;

i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
