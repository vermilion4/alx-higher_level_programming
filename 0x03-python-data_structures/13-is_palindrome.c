#include <stddef.h>
#include "lists.h"

int is_palindrome(listint_t **head)
{
listint_t *current;
listint_t *reverse;
listint_t *temp;
int count;
int i;
int j;
int palindrome;

current = *head;
reverse = NULL;
count = 0;
palindrome = 1;
while (current != NULL)
{
count++;
current = current->next;
}
current = *head;
for (i = 0; i < count / 2; i++)
{
temp = current->next;
current->next = reverse;
reverse = current;
current = temp;
}
if (count % 2 == 1)
current = current->next;
for (j = 0; j < count / 2; j++)
{
if (current->n != reverse->n)
{
palindrome = 0;
break;
}
current = current->next;
reverse = reverse->next;
}
return (palindrome);
}
