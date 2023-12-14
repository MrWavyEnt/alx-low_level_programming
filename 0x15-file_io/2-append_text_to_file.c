#include "main.h"
/**
 * append_text_to_file - add text to an already existing file
 * @filename: the name of the file to append content to
 * @text_content: The content to be appended to the file
 * Return: 1 on success and -1 if not
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int y;
	int newletters;
	int x;

	if
		(!filename)
			return (-1);

	y = open(filename, O_WRONLY | O_APPEND);
	if (y == -1)
		return (-1);

	if (text_content)
	{
	for (newletters = 0; text_content[newletters]; newletters++)
		;

		x = write(y, text_content, newletters);

		if (x == -1)
		{
			close(y);
			return (-1);
		}
	}

	close(x);

	return (1);
}
