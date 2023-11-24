#include <stdio.h>
/**
 * get_endianness - checks the endianness of the system
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *)&x;

	return ((*c == 1) ? 1 : 0);
}
/**
 * main - entry point of the program
 * Return: 0 on pass
 */
int main(void)
{
	int endianness = get_endianness();

	if (endianness == 0)
	{
		printf("Big Endian\n");
	}
	else
	{
		printf("Little Endian\n");
	}
	return (0);
}
