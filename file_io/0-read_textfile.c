#include "main.h"

/**
 * 
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
    FILE * fptr;
    int count = 0;
    char * line;

    fptr = fopen(filename, "r");

    line = malloc(sizeof(char) * letters);

    while (!feof(fptr))
    {
        fgets(line, letters, fptr); 
        count += puts(line);
    }
    free(line);
    fclose(fptr);

    return(count);
}