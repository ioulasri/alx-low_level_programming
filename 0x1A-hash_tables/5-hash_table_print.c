#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 *
 * @ht: hash table to be printed
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int size, index = 0;
	hash_node_t *current;
	int flag = 0;

	if (!ht)
		return;

	size = ht->size;
	printf("{");
	while (index < size)
	{
		current = ht->array[index];
		while (current != NULL)
		{
			if (current->key)
			{
				if (flag)
					printf(", ");
				printf("%s: %s", current->key, current->value);
				flag = 1;
			}
			current = current->next;
		}
		index++;
	}
	printf("}\n");
}
