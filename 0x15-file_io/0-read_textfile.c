#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- a function that reads a text file
 * and  prints it  to STDOUT.
 * @filename: text file that is being read
 * @letters: this represents the  number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or the  filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fileDesc;
	ssize_t bytesWrite;
	ssize_t bytesRead;

	fileDesc = open(filename, O_RDONLY);
	if (fileDesc == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	bytesRead = read(fileDesc, buffer, letters);
	bytesWrite = write(STDOUT_FILENO, buffer, bytesRead);


	free(buffer);
	close(fileDesc);
	return (bytesWrite);
}
