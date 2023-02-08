#include "main.h"
/**
 *read_textfile - opens and reads letters from a file and returns the letters
 *@filename: valid file with content
 *@letters: content of file
 *Return: letters or -1 if unsuccessful
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, 0_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	rd = read(fd, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	close(fd);
	free(buffer);

	return (wr);
}
