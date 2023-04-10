#include "main.h"

/**
 * main - Prints the multiplication of two numbers, followed by a new line.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the program receives two arguments - 0.
 *         If the program does not receive two arguments - 1.
 */

int main(int argc, char *argv[])
{
	int val1, val2, prod;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	val1 = atoi(argv[1]);
	val2 = atoi(argv[2]);
	prod = val1 * val2;
	printf("%d\n", prod);
	return (0);
}
