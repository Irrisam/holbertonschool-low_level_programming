#include "hash_tables.h"

/**
 * key_index - returns the index for a string
 * @key: string given
 * @size: size of array
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int stock;

	stock = hash_djb2(key);
	stock = stock % size;
	return (stock);
}
