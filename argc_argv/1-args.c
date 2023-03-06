#include <stdio.h>

/**
 * main - pronts number of arguments
 * @argc: count of args
 * @argv: array of pointers of argc
 * Return: 0
*/

int main(int argc, char **argv)
{
	(void) *argv;
	argc -= 1;
	printf("%d\n", argc);
	return (0);
}
