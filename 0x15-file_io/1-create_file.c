#include "main.h"
/**
 *  create_file - create a file and write in it
 * @filename:file to be created
 * @text_content: content of the file created
 * Return: 1 or -1 if fails
 */
int create_file(const char *filename, char *text_content)
{
	int fp, writeFile;
	int length = 0;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fp == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
			length++;
	}
	writeFile = write(fp, text_content, length);

	if (writeFile == -1)
	{
		return (-1);
	}
	close(fp);
	return (1);
}
