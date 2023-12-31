#include "main.h"

/**
 * close_fds - close file descriptors
 *
 * @nfds: number of file descriptors to close
 *
 * Return: 1 on success, else exits with status code 100
 */

int close_fds(int nfds, ...)
{
	va_list fds;
	int i, chk_close;

	va_start(fds, nfds);

	for (i = 0; i < nfds; i++)
	{
		chk_close = va_arg(fds, int);
		if (chk_close == -1)
		{
			print_close_fail(chk_close);
			exit(CLOSE_FAIL);
		}
	}

	va_end(fds);
	return (1);
}


/**
 * prp_buff - prepares the destination buffer for writing
 *
 * @src: the source file to copy from
 * @dest: the destination file
 *
 * Return: a pointer to the newly buffer
 */
char *prp_buff(char *src, char *dest)
{
	size_t num_of_bytes = strlen(src);
	char *buffer = malloc(sizeof(char) * num_of_bytes);

	if (buffer == NULL)
	{
		print_write_fail(dest);
		exit(WRITE_FAIL);
	}

	return (buffer);
}


/**
 * cp - copies the contents from one file descriptor another
 *
 * @fd_in: the input file descriptor
 * @fd_out: the output file descriptor
 * @buff: the buffer to write to
 * @dest_file: the name of the destination file
 * @src_file: the name of the source file
 */
void cp(int fd_in, int fd_out, char *buff, char *dest_file, char *src_file)
{
	ssize_t n_read, n_write;

	while ((n_read = read(fd_in, buff, BUFF_LEN)) > 0)
	{
		n_write = write(fd_out, buff, n_read);
		if (n_write == -1)
		{
			free(buff);
			buff = NULL;
			print_write_fail(dest_file);
			exit(WRITE_FAIL);
		}
	}

	free(buff);
	buff = NULL;

	if (n_read == -1)
	{
		print_read_fail(src_file);
		exit(READ_FAIL);
	}
}

/**
 * main - copies files
 *
 * @argc: arguments counter
 * @argv: the command line arguments (expects two: src file and dest file)
 *
 * Return: 0 on success, or exits with a specific status code
 */
int main(int argc, char *argv[])
{
	char *buffer = NULL;
	int fd_in, fd_out;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(INVALID_NARGS); /* invalid number of arguments */
	}

	fd_in = open(argv[1], O_RDONLY);
	if (fd_in == -1)
	{
		print_read_fail(argv[1]);
		exit(NO_SUCH_FILE); /* the file doesn't exist or user lacks permissions */
	}

	fd_out = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_out == -1)
	{
		print_write_fail(argv[2]);
		exit(WRITE_FAIL);
	}

	buffer = prp_buff(argv[1], argv[2]);
	cp(fd_in, fd_out, buffer, argv[2], argv[1]);
	close_fds(2, fd_in, fd_out); /* close file descriptors */

	return (0);
}
