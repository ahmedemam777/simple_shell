#include "header.h"
/**
 * free_bufs - 
 * @buf: buffer free
 * Return: no
*/
void free_bufs(char **buf)
{
	int x;
    if (!buf || buf == NULL)
    {
        return;
    }
    while (buf[x])
    {
        if (buf[x] != NULL)
        {
            free(buf[x]);
            buf[x] = NULL;
        }
        x++;
    }
    free(buf);
}