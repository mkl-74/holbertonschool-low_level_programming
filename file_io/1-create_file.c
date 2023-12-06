#include <stdio.h>
#include <stdlib.h>

/**
 * create_file - create a file and write inside
 *
 *
 *
 *
*/

int create_file(const char *filename, char *text_content)
{
    FILE *fptr;

    fptr = fopen(filename, "w");
    if (fptr == NULL)
        return (-1);

    fprintf(fptr, "%s", text_content);
    fclose(fptr);



    return (1);
}

