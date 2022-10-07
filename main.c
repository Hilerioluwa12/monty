#include "monty.h"
<<<<<<< HEAD

/**
 * Globale data - collection of data instance
 */
data_t data;

/**
 * main - main function
 * @ac: arguments count
 * @av: arguments vector
 *
 * Return: (Success) EXIT_SUCCESS
 * ------- (Fail) EXIT_FAILURE
=======
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

char **op_toks = NULL;

/**
 * main - the entry point for Monty Interp
 *
 * @argc: the count of arguments passed to the program
 * @argv: pointer to an array of char pointers to arguments
 *
 * Return: (EXIT_SUCCESS) on success (EXIT_FAILURE) on error
>>>>>>> Ileri12
 */
int main(int argc, char **argv)
{
<<<<<<< HEAD
	ssize_t n_read = 1;
	size_t length = 0;
	stack_t *stack = NULL;

	memset((void *) &data, 0, sizeof(data));
	if (ac != 2)
		push_error(12);
	data.filename = av[1];
	data.fp = fopen(data.filename, "r");
	if (data.fp == NULL)
		push_error(14);
	while ((n_read = getline(&data.line, &length, data.fp)) > 0)
	{
		if (*data.line == '\n')
			continue;
		data.line_number++;
		free(data.args);
		if (split_line() < 0)
			continue;
		if (*data.args == NULL)
			continue;
		process_line(&stack);
	}
	free_data();
	free_dlistint(stack);
	return (EXIT_SUCCESS);
=======
	FILE *script_fd = NULL;
	int exit_code = EXIT_SUCCESS;

	if (argc != 2)
		return (usage_error());
	script_fd = fopen(argv[1], "r");
	if (script_fd == NULL)
		return (f_open_error(argv[1]));
	exit_code = run_monty(script_fd);
	fclose(script_fd);
	return (exit_code);
>>>>>>> Ileri12
}
