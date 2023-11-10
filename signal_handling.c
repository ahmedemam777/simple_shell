#include "header.h"
/**
 * signal_handling - keep shell in interactive mode
 * @x: signal num
 * Return: no
*/
void signal_handling(int x)
{
    (void)x;
    write(STDERR_FILENO, "\n", 1);
    write(STDERR_FILENO, "AE $ ", 5);
}
