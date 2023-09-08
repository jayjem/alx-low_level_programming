#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: A pointer to the name of the
 *  file that need to be created.
 * @text_content: A pointer to a string to write to the file.
 * Return: If function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fileDesc;
	int byteWrite;
	int length;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	fileDesc = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	byteWrite = write(fileDesc, text_content, length);

	if (fileDesc == -1 || byteWrite == -1)
		return (-1);

	close(fileDesc);

	return (1);
}
