#include"main.h"
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
/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments
 * @argv: An array of pointers to the arguments
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		print_error_exit(97, "Usage: cp file_from file_to");
	}
	const char *file_from = argv[1];
	const char *file_to = argv[2];
	int fd_to, fd_from;

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		print_error_exit(98, "Can't read from file");
	}
	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		print_error_exit(99, "Can't write to file");
	}
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
	{
		print_error_exit(99, "Can't write to file");
	}
		if (bytes_written != bytes_read)
	{
		print_error_exit(99, "Write did not complete successfully");
	}
	}
	if (bytes_read == -1)
	{
		print_error_exit(98, "Can't read from file");
	}
	if (close(fd_from) == -1)
	{
		print_error_exit(100, "Can't close file descriptor");
	}
	if (close(fd_to) == -1)
	{
		print_error_exit(100, "Can't close file descriptor");
	}
	return (0);
}
