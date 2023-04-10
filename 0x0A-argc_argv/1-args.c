#include "main.h"

/**
 * main - function prints the number of arg passed into it
 * @argc: gets number of args passed to it
 * @argv: An array of pointers to arg
 * Return: Always 0
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
