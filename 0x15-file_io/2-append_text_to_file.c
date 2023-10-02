#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename
 * @text_content: added content
 * Return: 1 if the file exists, -1 if the fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp, writeFile;
	int length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
			length++;
	}

	fp = open(filename, O_WRONLY | O_APPEND);
	writeFile = write(fp, text_content, length);

	if (fp == -1 || writeFile == -1)
		return (-1);

	close(fp);

	return (1);
}
