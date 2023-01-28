#include "shell.h"

/**
 * handle_builtin - handles execution of builtin functions
 * @command: tokenized commands
 * @line: input read from stdin
 * Return: 1 if executed, 0 if not
 */
int (*get_builtin(char *cmd))(data_shell *datash)
{
	builtin_t builtin[] = {
		{ "env", _env },
		{ "exit", exit_shell },
		{ "setenv", _setenv },
		{ "unsetenv", _unsetenv },
		{ "cd", cd_shell },
		{ "help", get_help },
		{ NULL, NULL }
	};
	int i;

	for (i = 0; builtin[i].name; i++)
	{
		if (_strcmp(builtin[i].name, cmd) == 0)
			break;
	}

	return (builtin[i].f)
}
