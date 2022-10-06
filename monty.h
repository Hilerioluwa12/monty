#ifndef _MONTY_H
#define _MONTY_H

#define _GNU_SOURCE_
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 * struct data_instance - data instance
 * @line: the read line
 * @args: the arguments
 * Description: data instance, line, args
 *
 */
typedef struct instance_s
{
	char *line;
	char **args;
} data_t;

int process_line(data_t *data)
#endif
