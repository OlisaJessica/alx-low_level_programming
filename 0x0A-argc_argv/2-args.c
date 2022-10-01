#include <stdio.h>
#include "main.h"

/**
 * main -prints all arguments it receives
 * @argc: count argumenst
 * @argv: Arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int count = 0;

       /*Declaring variables*/
	if (argc > 0)
	while (count < argc)
       {
	printf("%s\n", argv[count]);
       }
	return (0);
}
