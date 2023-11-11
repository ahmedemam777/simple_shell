#include "header.h"

/**
 * exec_func - execute command entered
 *@comm: command
 *@comm_ptrs: pointers to commands
 *Return: 0
*/

void exec_func(char *comm, char **comm_ptrs)
{
    int state;
    pid_t ch_pid;
    char **enviro = environ;
    ch_pid = fork();
    if (ch_pid < 0)
    {
        perror(comm);
    }
    else if (ch_pid == 0)
    {
        if (execve(comm, comm_ptrs, enviro) == -1)
        {
            perror(comm);
            exit(EXIT_FAILURE)
        }
        perror(comm);
        free(comm);
        free_bufs(comm_ptrs);
        exit(98);
    }
    else
    {
        wait(&state);
    }
}