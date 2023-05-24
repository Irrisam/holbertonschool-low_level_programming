#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1);
    hash_table_set(ht, "mentioner1", "hetairas1");
    hash_table_set(ht, "hetairas2", "mentioner2");
    hash_table_set(ht, "hetairas3", "mentioner3");
    hash_table_set(ht, "hetairas4", "mentioner4");
    return (EXIT_SUCCESS);
}