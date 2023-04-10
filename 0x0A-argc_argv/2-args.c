#include "main.h"

/**
 * main - function that prints strings passed
 * @argc: gets number of args passed
 * @argv: pointers to the args passed
 * Return: always return 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
