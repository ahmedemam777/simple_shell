#include "header.h"
/**
 * prompt_show - print sign of shell to be ready to take command of user
 * Retuen: no return
*/
void prompt_show(void)
{
	fgs fgs = {false};
	if ((isatty(STDIN_FILENO) == 1) && (isatty(STDOUT_FILENO) == 1))
	{
		fgs.interactive = 1;
	}
	if (fgs.interactive)
	{
		write(STDERR_FILENO, "AE $ ", 5);
	}
}