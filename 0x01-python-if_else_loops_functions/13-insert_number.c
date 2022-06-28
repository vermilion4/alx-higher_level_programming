#include "lists.h"
/**
 * insert_node - Inserts a new node at the beginning of a list.
 * @head: The head of the list.
 * @n: The data to insert.
 * Return: The address of the new node.
 */
listint_t *insert_node(listint_t **head, int number)
{
listint_t *new_node = malloc(sizeof(listint_t));
if (!new_node)
return (NULL);
new_node->n = number;
new_node->next = *head;
*head = new_node;
return (new_node);
}
