#include "main.h"

/**
 * append_text_to_file - appends content to file
 * @filename: path to file to be copied
 * @text_content: text to be appended
 * Return: 1 on success, -1 on fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fptr = NULL;

	if (access(filename, R_OK) == 0)
	{
		fptr = fopen(filename, "a");
	}
	else
	{
		return (-1);
	}
	if (fptr == NULL)
	{
		return (-1);
	}
	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	fprintf(fptr, "%s", text_content);
	return (1);
}
