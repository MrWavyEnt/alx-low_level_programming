#include "main.h"
#include <stdio.h>

/**
 * rit13 - encoder rot13
 * @s: pointer to string params
 * Return: *s
 */

char *rot13(char *s)
{
int i;
int j;
char datal[] =
"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"
char datarot[] =
"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 52; j++)
{
if (s[i] == datal[j])
{
s[i] = datarot[j];
break;
}
}
}
return (s);
}

int main(void)
{
char s[] = "Hello, World!";
char *p;

p = rot13(s);

printf("%s\n", p);

return (0);
}
