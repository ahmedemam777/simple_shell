#ifndef HEADER
#define HEADER
/*libraries*/
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <time.h>
#include <stdbool.h>
#include <signal.h>

/*STRING FUNCS*/
char *str_dup(char *s);
char *str_chr(char *s, char c);
int str_cmp(char *s1, char *s2);
int str_len(char *s);
int strn_cmp(char *s1, char *s2, int n);
/*other prototypes*/
void prompt_show(void);
char *read_ln(void);
char **tk_nizer(char *line);
void signal_handling(int x);

extern __sighandler_t sign(int __sig, __sighandler_t __handler);
/*STRUCTS*/
/**
 * struct fgs - struct that handling flags
 * @interactive: check if interactive
*/
typedef struct fgs
{
	bool interactive;
} fgs;
#endif
