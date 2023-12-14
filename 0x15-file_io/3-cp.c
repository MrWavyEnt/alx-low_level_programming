#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

void check_IO_stat(int stat, int fd, char *filename, char mode);

/**
 * main - function copies the content of one file to another.
 * @argc: The argument count
 * @argv: The arguments passed
 * Return: 0 on success, exit otherwise
 */
int main(int argc, char *argv[])
{
	int src, dest, n_read, wrote, close_src, close_dest;
	unsigned int node = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	src = open(argv[1], O_RDONLY);
	check_IO_stat(src, -1, argv[1], 'O');

	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, node);
	if (dest == -1)
	{
		check_IO_stat(dest, -1, argv[2], 'O');
	}

	do {
		n_read = read(src, buffer, sizeof(buffer));
		if (n_read == -1)
			check_IO_stat(n_read, -1, argv[1], 'O');

		wrote = write(dest, buffer, n_read);
		if (wrote == -1)
			check_IO_stat(wrote, -1, argv[2], 'W');
	} while (n_read == sizeof(buffer));

	close_src = close(src);
	check_IO_stat(close_src, src, NULL, 'C');

	close_dest = close(dest);
	check_IO_stat(close_dest, dest, NULL, 'C');

	return (0);
}

/**
 * check_IO_stat - function checks if a file can be opened or closed
 * @stat: result of the file operation (return value)
 * @filename: name of file
 * @mode: closing ('C'), opening ('O'), or writing ('W')
 * @fd: file descriptor
 * Return: void
 */

void check_IO_stat(int stat, int fd, char *filename, char mode)
{
	if (mode == 'C' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	else if (mode == 'O' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
				exit(98);
	}
	else if (mode == 'W' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(98);
	}
}
