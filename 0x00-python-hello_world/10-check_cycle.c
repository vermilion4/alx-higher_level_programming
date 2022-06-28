#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * check_cycle - checks if a list has a cycle
 * @list: pointer to the head of the list
 * Return: 1 if there is a cycle, 0 if there is not
 */

int check_cycle(listint_t *list)
{
listint_t *slow;
listint_t *fast;

if (list == NULL)
return (0);
slow = list;
fast = list;
while (fast->next != NULL && fast->next->next != NULL)
{
slow = slow->next;
fast = fast->next->next;
if (slow == fast)
return (1);
}
return (0);
}
