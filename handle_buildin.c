#include "main.h"

/**
 * handle_builtin - handles execution of builtin function
 * @com: tokenized command
 * @rd: input read
 * Return: 1 if executed, 0 if not
 */

int handle_builtin(char **com, char *rd)
{
	struct builtin builtin = {"env", "exit"};

	if (_strcmp(*com, builtin.env) == 0)
	{
		print_env();
		return (1);
	}
	else if (_strcmp(*com, builtin.exit) == 0)
	{
		exit_cmd(com, rd);
		return (1);
	}
	return (0);
}
