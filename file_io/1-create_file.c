#include "main.h"

/**
 * 
*/

int create_file(const char *filename, char *text_content)
{
    FILE *fptr = NULL;

    fptr = fopen(filename, "w");

    if (fptr == NULL || filename == NULL)
    {
        return (-1);
    }
    if (filename == NULL)
    {
        fclose(fptr);
        return(1);
    }
    fputs(text_content, fptr);
    chmod(filename, 00400 | 00200);
    
    fclose(fptr);
    return(1);
}