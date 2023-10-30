#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: the file to read
 * @letters: the number of bytes to read from the file
 *
 * Return: the number bytes wrtten to stdout, else 0 if an error occur
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff = NULL; /* set buffer to null */
	ssize_t n_write, n_read; /* track number of bytes to read and write */
	int fd_in; /* file descriptor */

	if (filename == NULL)
		return (0); /* invalid file name */

	fd_in = open(filename, O_RDONLY); /* set to read only */
	if (fd_in == -1)
		return (0); /* file can not be opened or read */
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(fd_in); /* close file descriptor */
		return (0); /* memory allocation failed */
	}
	/*
	 * Read 'letters' number of bytes from the file into the buffer
	 * and store the number of bytes read
	 */
	n_read = read(fd_in, buff, letters);
	close(fd_in);
	if (n_read == -1)
	{
		free(buff);
		return (0); /* could not read, failed */
	}
	/*
	 * Write the contents of the buffer to the standard output and
	 * store the number of bytes written
	 */
	n_write = write(STDOUT_FILENO, buff, n_read);
	free(buff);

	if (n_write != n_read || n_write == -1)
		return (0);

	return (n_write);
}
