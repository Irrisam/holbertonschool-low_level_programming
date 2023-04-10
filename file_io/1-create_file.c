#include "main.h"

/**
 * create_file - creates a file and appends content
 * @filename: name of the wanted file
 * @text_content: stuff to be append to
 * Return: 1 on success -1 if fail
 */

int create_file(const char *filename, char *text_content)
{
	FILE *fptr = NULL;

	fptr = fopen(filename, "w");

	if (fptr == NULL)
	{
		return (-1);
	}
	if (filename == NULL)
	{
		fclose(fptr);
		return (1);
	}
	if (text_content == NULL)
	{
		chmod(filename, 00400 | 00200);
		fclose(fptr);
		return (1);
	}
	fputs(text_content, fptr);
	chmod(filename, 00400 | 00200);

	fclose(fptr);
	return (1);
}
