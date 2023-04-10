#include "main.h"

/**
 * read_textfile - reads a txt file and prints output in POSIX
 * @filename: name of the file to be read
 * @letters: number of letters to be printed
 * Return: count of printed chars
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
    FILE * fptr;
    int count = 0;
    char * line;
    int i = 0;

    fptr = fopen(filename, "r");
    line = malloc(sizeof(char) * letters);
    while (!feof(fptr))
    {
        fgets(line, letters, fptr); 
        while(line[i] != '\0')
        {
            count += putchar(line[i]);
            i++;
        }
        i = 0;
    }
    fclose(fptr);

    return(count);
}