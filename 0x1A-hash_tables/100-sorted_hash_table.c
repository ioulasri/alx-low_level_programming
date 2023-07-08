#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);


/**
 * shash_table_create - creates a sorted hash table
 * @size: size of the array
 * Return: pointer to the newly created hash table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
    shash_table_t *shash_table;

    shash_table = malloc(sizeof(shash_table_t));
    if (!shash_table)
        return (NULL);
    shash_table->size = size;
    shash_table->array = malloc(sizeof(shash_node_t *) * size);
    if (!shash_table->array)
    {
        free(shash_table->array);
        return (NULL);
    }
    return (shash_table);
}

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    shash_node_t *new;
    char *value_copy;
    unsigned long int index, i;

    if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
        return (0);

    value_copy = strdup(value);
    if (value_copy == NULL)
        return (0);

    index = key_index((const unsigned char *)key, ht->size);
    for (i = index; ht->array[i]; i++)
    {
        if (strcmp(ht->array[i]->key, key) == 0)
        {
            free(ht->array[i]->value);
            ht->array[i]->value = value_copy;
            return (1);
        }
    }

    new = malloc(sizeof(shash_node_t));
    if (new == NULL)
    {
        free(value_copy);
        return (0);
    }
    new->key = strdup(key);
    if (new->key == NULL)
    {
        free(new);
        return (0);
    }
    new->value = value_copy;
    new->next = ht->array[index];
    ht->array[index] = new;

    return (1);
}

char *shash_table_get(const shash_table_t *ht, const char *key)
{
    unsigned long int index, size;
    shash_node_t *current;

    if (ht == NULL || key == NULL || *key == '\0')
        return (NULL);
    size = ht->size;
    index = key_index((unsigned char *)key, size);

    current = ht->array[index];
    while (current)
    {
        if (strcmp(current->key, key) ==  0)
            return (current->value);
        current = current->next;
    }
    return (NULL);
}

void shash_table_print(const shash_table_t *ht)
{
    unsigned long int i;
    shash_node_t *current;
    int flag = 0;

    if (ht == NULL)
        return;
    printf("{");
    for (i = 0; i < ht->size; i++)
    {
        current = ht->array[i];
        while (current)
        {
            if (flag == 1)
                printf(", ");
            printf("'%s': '%s'", current->key, current->value);
            flag = 1;
            current = current->next;
        }
    }
    printf("}\n");
}

void shash_table_print_rev(const shash_table_t *ht)
{
    unsigned long int i;
    shash_node_t *current;
    int flag = 0;

    if (ht == NULL)
        return;
    printf("{");
    for (i = ht->size - 1; i > 0; i--)
    {
        current = ht->array[i];
        while (current)
        {
            if (flag == 1)
                printf(", ");
            printf("'%s': '%s'", current->key, current->value);
            flag = 1;
            current = current->next;
        }
    }
    printf("}\n");
}

void shash_table_delete(shash_table_t *ht)
{
    unsigned long int i;
    shash_node_t *current, *temp;

    if (ht == NULL)
        return;
    for (i = 0; i < ht->size; i++)
    {
        current = ht->array[i];
        while (current)
        {
            temp = current;
            current = current->next;
            free(temp->key);
            free(temp->value);
            free(temp);
        }
    }
    free(ht->array);
    free(ht);
}
