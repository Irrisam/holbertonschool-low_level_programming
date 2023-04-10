#include "main.h"

/**
 * read_textfile - reads a txt file and prints output in POSIX
 * @filename: name of the file to be read
 * @letters: number of letters to be printed
 * Return: count of printed chars
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
    FILE * fptr = NULL;
    size_t count = 0;
    char cstock = ' ';

    fptr = fopen(filename, "r");
    if (letters == 0 || filename == NULL || fptr == NULL)
        {
            return(count);
        }
   
        while ((cstock = fgetc(fptr)) != EOF)
        {
            putchar(cstock);
            count++;
            if(count >= letters)
            {
                break;
            }
        }
    fclose(fptr);

    return (count);
}