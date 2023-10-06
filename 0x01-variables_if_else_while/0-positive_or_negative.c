#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
int n;

srand(time(NULL)); /* Seed the random number generator with the current time */
n = rand() - RAND_MAX / 2; /* Generate a random number and store it in n */

printf("%d is ", n); /* Print the random number */

if (n > 0)
{
printf("positive\n");
}
else if (n < 0)
{
printf("negative\n");
}
else
{
printf("zero\n");
}

return (0);
}

