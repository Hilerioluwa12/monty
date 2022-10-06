#include "monty.h"
data_t data;
/**
 * main - main function
 * @ac: arg count
 * @av: args
 * Return: (Success) EXIT_SUCCESS
 * --------(Fail) EXIT_FAILURE
 */
int main(int ac, char **av)
{
	statck stack_t = NULL;
	ssize_t n_read;
	size_t length = 0;

	memset((void *) &data, 0, sizeof(data));
	if (ac != 2)
	{
		push_error(12)
	}
	data.filename = av[1];
	data.fp = fopen(data.filename, "r");
	if (data.fp == NULL)
		push_error(14);
	while ((n_read = getline(&data.line, &length, fp)) > 0)
	{
		data.line_number++;
		split_line(&data);
		process_line(&stack);
	}
	free_data();
	free_dlistint(stack);
	return (EXIT_SUCCESS);
}
