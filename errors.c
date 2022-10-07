#include "monty.h"

<<<<<<< HEAD
/**
 * get_error_1 - gets error
 * @err_code: error code
=======
int usage_error(void);
int malloc_error(void);
int f_open_error(char *filename);
int unknown_op_error(char *opcode, unsigned int line_number);
int no_int_error(unsigned int line_number);

/**
 * usage_error - Prints usage error messages.
>>>>>>> Ileri12
 *
 * Return: (EXIT_FAILURE) always.
 */
<<<<<<< HEAD
void get_error_1(short int err_code)
{
	switch (err_code)
	{
	case 11:
		fprintf(stderr, "Error: malloc failed\n");
		free_data();
		break;
	case 12:
		fprintf(stderr, "USAGE: monty file\n");
		break;
	case 14:
		fprintf(stderr, "Error: Can't open file %s\n", data.filename);
		break;
	case 15:
		fprintf(stderr, "L%d: unknown instruction %s\n",
			data.line_number, data.args[0]);
		free_data();
		break;
	case 16:
		fprintf(stderr, "L%d: usage: push integer\n", data.line_number);
		free_data();
		break;
	case 17:
		fprintf(stderr, "L%d: can't pint, stack empty\n", data.line_number);
		free_data();
		break;
	case 18:
		fprintf(stderr, "L%d: can't pop an empty stack\n", data.line_number);
		free_data();
		break;
	case 19:
		fprintf(stderr, "L%d: can't swap, stack too short\n", data.line_number);
		free_data();
		break;
	default:
		break;
	}
=======
int usage_error(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	return (EXIT_FAILURE);
>>>>>>> Ileri12
}

/**
 * malloc_error - Prints malloc error messages.
 *
 * Return: (EXIT_FAILURE) always.
 */
int malloc_error(void)
{
<<<<<<< HEAD
	switch (err_code)
	{
	case 20:
		fprintf(stderr, "L%d: can't add, stack too short\n", data.line_number);
		free_data();
		break;
	case 21:
		fprintf(stderr, "L%d: can't sub, stack too short\n", data.line_number);
		free_data();
		break;
	case 22:
		fprintf(stderr, "L%d: can't div, stack too short\n", data.line_number);
		free_data();
		break;
	case 23:
		fprintf(stderr, "L%d: division by zero\n", data.line_number);
		free_data();
		break;
	case 24:
		fprintf(stderr, "L%d: can't mul, stack too short\n", data.line_number);
		free_data();
		break;
	case 25:
		fprintf(stderr, "L%d: can't mod, stack too short\n", data.line_number);
		free_data();
		break;
	default:
		break;
	}
=======
	fprintf(stderr, "Error: malloc failed\n");
	return (EXIT_FAILURE);
>>>>>>> Ileri12
}

/**
<<<<<<< HEAD
 * push_error - pushs errors
 * @err_code: error code
 *
 * Return: void
=======
 * f_open_error - Prints file opening error messages w/ file name.
 * @filename: Name of file failed to open
 *
 * Return: (EXIT_FAILURE) always.
 */
int f_open_error(char *filename)
{
	fprintf(stderr, "Error: Can't open file %s\n", filename);
	return (EXIT_FAILURE);
}

/**
 * unknown_op_error - Prints unknown instruction error messages.
 * @opcode: Opcode where error occurred.
 * @line_number: Line number in Monty bytecodes file where error occured.
 *
 * Return: (EXIT_FAILURE) always.
 */
int unknown_op_error(char *opcode, unsigned int line_number)
{
	fprintf(stderr, "L%u: unknown instruction %s\n",
		line_number, opcode);
	return (EXIT_FAILURE);
}

/**
 * no_int_error - Prints invalid monty_push argument error messages.
 * @line_number: Line number in Monty bytecodes file where error occurred.
 *
 * Return: (EXIT_FAILURE) always.
>>>>>>> Ileri12
 */
int no_int_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: usage: push integer\n", line_number);
	return (EXIT_FAILURE);
}
