#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int n;

    srand(time(0)); // Seed the random number generator with the current time
    n = rand(); // Generate a random number and store it in n

    int lastDigit = n % 10; // Get the last digit of n

    printf("Last digit of %d is %d and is ", n, lastDigit);

    if (lastDigit > 5)
    {
        printf("greater than 5\n");
    }
    else if (lastDigit == 0)
    {
        printf("0\n");
    }
    else
    {
        printf("less than 6 and not 0\n");
    }

    return 0;
}

