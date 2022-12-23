#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

extern char **environ;
extern __sighandler_t signal(int __sig, __sighandler_t __handler);
int checker(char **cmd, char *buf);
void prompt_user(void);
void handle_signal(int m);
char **tokenizer(char *rd);
char *test_path(char **path, char *cmd);
char *append_path(char *path, char *cmd);
int handle_builtin(char **cmd, char *rd);

void exit_cmd(char **cmd, char *rd);
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
