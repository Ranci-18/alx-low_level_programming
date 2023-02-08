#include "main.h"
/**
 *append_text_to_file - appends content to filename
 *@filename: filename to append
 *@text_content: content to append
 *
 *
 *Return: 1 for success, -1 for failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, letters, append;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (letters = 0; text_content[letters]; letters++)
			;
		append = write(fd, text_content, letters);
		if (append == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
