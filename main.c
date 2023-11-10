#include "header.h"
/**
 * main - simple shell take command and execute it and display output
 * @ac: arg count 
 * @argv: args parameter
 * @envirp: environment parameter
*/
int main(int ac, char **argv, char *envirp[])
{
    char *line; char **args;
    (void)argv; (void)envirp;
    if (ac < 1)
    {
        return (-1);
    }
    sign(SIGINT, signal_handling);
    
while (1)
{
    prompt_show();
    line = read_ln();
    args = tk_nizer(line);



    free(line);
    free(args);
}

}