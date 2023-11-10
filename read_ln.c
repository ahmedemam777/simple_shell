#include "header.h"

/**
 * read_ln - read the line from stdin
 * return: a pointer that point to string  contain content
*/

char *read_ln(void)
{
    size_t bf_size = 0;
    char *line = NULL;
    if (getline(&line, &bf_size, stdin) == -1)
    {
        if (feof(stdin))
        {
            free(line);
            exit(EXIT_SUCCESS);
        }
        else
        {
            free(line);
            perror("Error while reading");
            exit(EXIT_FAILURE);
        }
    }
    return (line);
}