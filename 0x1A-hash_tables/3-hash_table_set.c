#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int size, index;
    hash_node_t *node;

    if (strlen(key) == 0)
        return (0);

    size = ht->size;
    index = key_index((unsigned const char*)key, size);

    node = malloc(sizeof(hash_node_t));
    if (!node)
        return (0);

    node->key = (char *)key;
    node->value = strdup(value);
    node->next = NULL;

    if (!ht->array[index])
    {
        ht->array[index] = node;
        return (1);
    }
    node->next = ht->array[index];
    ht->array[index] = node;
    return (1);
}

