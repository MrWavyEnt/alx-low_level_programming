#include "main.h"

/**
 * flip_bits - checks the number of bits to be changed
 * from one number to others
 * @n: start num
 * @m: end num
 * Return: the number of bits to be changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int s, changes = 0;
	unsigned long int before;
	unsigned long int z = n ^ m;

	for (s = 63; s >= 0; s--)
	{
		before = z >> s;
		if (before & 1)
			changes++;
	}
	return (changes);
}
