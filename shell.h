#ifndef SHELL_H
#define SHELL_H

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

#define READ_BUF_SIZE 1024
#define WRITE_BUF_SIZE 1024
#define BUF_FLUSH -1

/* environment variables */
extern char **environ;
extern __sighandler_t signal(int __sig, __sighandler_t __handler);

/* handle built ins */
int checker(char **cmd, char *buf);
void prompt_user(void);
void handle_signal(int m);
char **tokenizer(char *line);
char *test_path(char **path, char *command);
char *append_path(char *path, char *command);
int (*get_builtin(char *cmd))(data_shell *datash);
void exit_cmd(char **command, char *line);
int _setenv(data_shell *datash);
int _unsetenv(data_shell *datash);
int exit_shell(data_shell *datash);
void print_env(void)
int _unsetenv(data_shell *datash);
int _setenv(data_shell *datash);
void set_env(char *name, char *value, data_shell *datash);
char *copy_info(char *name, char *value);
/* string handlers */
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
int _strncmp(char *s1, char *s2, int n);
char *_strdup(char *s);
char *_strchr(char *s, char c);
void execution(char *cp, char **cmd);
char *find_path(void);

/* helper function for efficient free */
void free_buffers(char **buf);
typedef struct builtin_s
{
	char *name;
	int (*f)(data_shell *datash);
} builtin_t;

typedef struct data
{
	char **av;
	char *input;
	char **args;
	int status;
	int counter;
	char **_environ;
	char *pid;
} data_shell;

struct info
{
	int final_exit;
	int ln_count;
} info;

struct flags
{
	bool interactive;
} flags;
#endif /* SHELL_H */
