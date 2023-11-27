#include "main.h"
/**
 * read_textfile - function that reads a text file and prints it to
 * the POSIX standard output
 * @filename: filename (string pointer)
 * @letters: number of letters printed
 * Return: number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int j;
	ssize_t y, x;
	char *buff;

	if (!filename)
		return (0);

	j = open(filename, O_RDONLY);

	if (j == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	y = read(j, buff, letters);
	x = write(STDOUT_FILENO, buff, y);

	close(j);
	free(buff);

	return (x);
}
