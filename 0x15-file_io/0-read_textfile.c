#include"main.h"

/**
 * read_textfile - function reads text file
 * @filename: a pointer to the name of the file to read
 * @letters: the number of letters to print
 * Return: returns the actual number of letters it could read and print
 * otherwise, -1 and 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t open_file, write_file, read_file;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	open_file = open(filename, O_RDONLY);
	read_file = read(open_file, buffer, letters);
	write_file = write(STDOUT_FILENO, buffer, read_file);

	if (open_file == -1 || read_file == -1
			|| write_file == -1 || write_file != read_file)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(open_file);
	return (write_file);
}
