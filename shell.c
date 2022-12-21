#include "main.h"

/**
 * main - carries out the read, execute then print output loop
 * @ac: argument count
 * @av: argument vector
 * @envp: environment vector
 * Return: 0
 */

int main(int ac, char **av, char *envp[])
{
	char *rd = NULL, *pathcommand = NULL, *path = NULL;
	size_t bufsize = 0;
	ssize_t linesize = 0;
	char **cmd = NULL, **paths = NULL;

	(void)envp, (void)av;

	if (ac < 1)
		return (-1);
	signal(SIGINT, handle_signal);
	while (1)
	{
		free_buffers(cmd);
		free_buffers(paths);
		free(pathcommand);
		prompt_user();
		linesize = getline(&rd, &bufsize, stdin);
		if (linesize < 0)
			break;
		info.ln_count++;
		if (rd[linesize - 1] == '\n')
		rd[linesize - 1] = '\0';
		cmd = tokenizer(rd);
		if (cmd == NULL || *cmd == NULL || **cmd == '\0')
			continue;
		if (checker(cmd, rd))
			continue;
			path = find_path();
			paths = tokenizer(path);
			pathcommand = test_path(paths, cmd[0]);
		if (!pathcommand)
		perror(av[0]);
		else
		execution(pathcommand, cmd);
	}
	if (linesize < 0 && flags.interactive)
		write(STDERR_FILENO, "\n", 1);
		free(line);
		return (0);
}
