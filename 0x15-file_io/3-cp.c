#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOREAD "Error: Cant't read from file %s\n"
#define ERR_NOCLOSE "Error: Can't close fd %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - the program to write
 * @ac: argument count of the program
 * @av: argument vector of the program
 * Return: successful if 1, unsuccessful if 0
 */
int main(int ac, char **av)
{
	int file_origin = 0;
	int file_dest = 0;
	char buf[READ_BUF_SIZE];
	ssize_t unit;

	if (!(ac == 3))
		dprintf(STDERR_FILENO, USAGE), exit(97);
	file_origin = open(av[1], O_RDONLY);
	if (file_origin == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
	file_dest = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (file_dest < 0)
		dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);
	while ((unit = read(file_origin, buf, READ_BUF_SIZE)) > 0)
		if (write(file_dest, buf, unit) != unit)
			dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);
	if (unit < 0)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);

	file_origin = close(file_origin);
	file_dest = close(file_dest);
	if (file_origin)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, file_origin), exit(100);
	if (file_dest)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, file_origin), exit(100);
	return (EXIT_SUCCESS);
}
