#include <stdio.h>

/**
 * main - pronts number of arguments
 * @argc: count of args
 * @argv: array of pointers of argc
*/

int main(int argc, char **argv)
{
	(void) *argv;
	printf("%d\n", argc);
	return (0);
}
