#include "main.h"
/**
 * create_file - create and write into a file and copy content in it
 * @filename: The filename to be created
 * @text_content: the content to be copied into the file.
 * Return: 1 if successful or -1 if failed.
 */
int create_file(const char *filename, char *text_content)
{
	int y;
	int newletters;
	int x;

	if (!filename)
		return (-1);

	y = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (y == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for
		(newletters = 0;
		text_content[newletters];
		newletters++);

	x = write(y, text_content, newletters);

	if (x == -1)
		return (-1);
	close(y);

	return (1);
}
