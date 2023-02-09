#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 *handl_errors - handles errors when reading and writing files
 *@file_from: file_from
 *@file_to: file_to
 *@argv: arguments vector
 *
 *Return: nothing
 */
void handl_errors(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
 *main - entry point, copies content from one file to another
 *@argc: number of arguments passed
 *@argv: arguments, file to copy from and file to copy to
 *
 *Return: nothing
 */
int main(int argc, char *argv[])
{
	int cp, letters, file_from, file_to, close_err;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (!argv[1])
		handl_errors(-1, 0, argv);
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_APPEND | O_TRUNC, 0664);
	handl_errors(file_from, file_to, argv);

	letters = 1024;
	while (letters == 1024)
	{
		letters = read(file_from, buffer, 1024);
		if (letters == -1)
			handl_errors(-1, 0, argv);
		cp = write(file_to, buffer, letters);
		if (cp == -1)
			handl_errors(0, -1, argv);
	}

	close_err = close(file_from);
	if (close_err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	close_err = close(file_to);
	if (close_err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
