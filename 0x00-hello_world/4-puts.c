#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char *message = "Programming is like building a multilingual puzzle";

    /* Display the message using the puts function */
    puts("[Got]");
    puts(message);
    printf("(%lu chars long)\n", strlen(message));

    /* Return 0 to indicate success */
    return (0);
}


