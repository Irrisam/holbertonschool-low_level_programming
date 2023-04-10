#include "main.h"

/**
 * main - copies content from one file to another
 * @argc: number of input elements
 * @argv: elements form stdin stored in arrays
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int fptrsrc = 0;
	int fptrdest = 0;
	char buffer[1024];
	ssize_t bytes_read;

	(void)argc;
	if (argv[3])
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}
    if (argv[2] == NULL)
    {
        fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
    }
	if (access(argv[1], R_OK) != 0)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fptrsrc = open(argv[1], O_RDONLY);
	if (fptrsrc < 0)
	{
		printf("Error: Can't write to %s\n", argv[1]);
		exit(99);
	}
	fptrdest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | 0331);
	if (fptrdest < 0)
	{
		fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((bytes_read = read(fptrsrc, buffer, 1024)) > 0)
	{
		if (write(fptrdest, buffer, bytes_read) != bytes_read)
		{
			fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	close(fptrsrc);
	close(fptrdest);
	return (0);
}
