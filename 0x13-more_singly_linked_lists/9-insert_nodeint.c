#include "lists.h"
/**
* insert_nodeint_at_index - inserts new node at specific position
* @head: first node
* @idx: Index where the new node is added
* @n: data inserted in the new node
* Return: new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int k;
listint_t *new;
listint_t *temp = *head;
new = malloc(sizeof(listint_t));
if (!new || !head)
return (NULL);
new->n = n;
new->next = NULL;
if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}
for (k = 0; temp && k < idx; k++)
{
if (k == idx - 1)
{
new->next = temp->next;
temp->next = new;
return (new);
}
else
temp = temp->next;
}
return (NULL);
}
