#include "main.h"

/**
  *_strcat - function name
  *@dest: parameter one
  * @src: parameter two
  * Return: dest
  */

char *_strcat(char *dest, char *src)
{
int i, j;

i = 0;

/*find the size of dest array*/
while (dest[i])
i++;

/* interate through each src array value without the null byte*/
for (j = 0; src[j] ; j++)
/*append src[c2] to dest[c] while overwritting the nullbyte in dest*/
dest[i++] = src[j];

return (dest);
}
