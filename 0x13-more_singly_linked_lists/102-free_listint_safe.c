#include "lists.h"
/**
* free_listint_safe - frees a linked list
* @h: pointer to the first node in the linked list
* Return: number of elements in the freed list
*/
size_t free_listint_safe(listint_t **h)
{
size_t lng = 0;
int df;
listint_t *temp;
if (!h || !*h)
return (0);
while (*h)
{
df = *h - (*h)->next;
if (df > 0)
{
temp = (*h)->next;
free(*h);
*h = temp;
lng++;
}
else
{
free(*h);
*h = NULL;
lng++;
break;
}
}
*h = NULL;
return (lng);
}
