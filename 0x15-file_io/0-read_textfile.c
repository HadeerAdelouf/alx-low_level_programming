#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 * @filename: the file to read.
 * @letters:number of letters to read and print.
 * Return:number of chars.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	int fp, readFile, writeFile;

		if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	fp = open(filename, 0_RDONLY, 600);
	if (fp == -1)
	{
		free(buff);
		return (0);
	}
	readFile = read(fp, buff, letters);
	if (readFile == -1)
	{
		free(buff);
		return (0);
	}
	writeFile = write(STDOUT_FILENO, buff, readFile);
		if (writeFile == -1 || writeFile != readFile)
	{
		return (0);
	}
		free(buff);
		close(fp);
		return (writeFile);
}
