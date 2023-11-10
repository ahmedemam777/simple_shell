#include "header.h"
/**
 * tk_nizer - split line in to strings
 * @line: sting that will be split
 * Return: pointer to new array
*/

char **tk_nizer(char *line)
{
	int i = 0;
    int bf_size = 64;
    char **toks = malloc(bf_size * sizeof(char *));
    char *tok;

    if (!toks)
    {
        exit(EXIT_FAILURE);
    }
    tok = strtok(line, tok_delim);
    while (tok != NULL)
    {
        if (tok[0] == '#')
        {
            break;
        }
        toks[i] = tok;
        i++;
        if (i >= bf_size)
        {
            bf_size += bf_size;
            toks = realloc(toks, bf_size * sizeof(char *));
            if (!toks)
            {
                exit(EXIT_FAILURE);
            }   
        }
        tok = strtok(NULL, tok_delim);
    }
    toks[i] = NULL;
    return (toks);
}