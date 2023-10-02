#ifndef _MAIN_H_
#define _MAIN_H_

#include<stdio.h>
#include<stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#define BUFFER_SIZE 1024
/**
 * print_error_exit - prints error messg
 * @code:number of exit
 * @message:message to print
 * Return:code number
 */
void print_error_exit(int code, const char *message)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
	exit(code);
}

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);


#endif

