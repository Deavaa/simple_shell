#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

int _strlen(const char *s);
char *_strcpy(char *dest, const char *src);
int _putchar(char c);
void putsfun(char *str);
unsigned int nbr_spaces(char *s);
char **stringToTokens(char *str);

extern char **environ;
extern __sighandler_t signal(int __sig, __sighandler_t __handler);
int checker(char **cmd, char *buf);
void prompt_user(void);
void handle_signal(int m);
char **tokenizer(char *line);
char *test_path(char **path, char *command);
char *append_path(char *path, char *command);
int handle_builtin(char **cmd, char *rd);

void exit_cmd(char **command, char *line);
void print_env(void);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
int _strncmp(char *s1, char *s2, int n);
char *_strdup(char *s);
char *_strchr(char *s, char c);
void execution(char *cp, char **cmd);
char *find_path(void);
void free_buffers(char **buf);



struct builtin
{
	char *env;
	char *exit;
} builtin;

struct info
{
	int final_exit;
	int ln_count;
} info;
struct flags
{
	bool interactive;
} flags;



#endif
