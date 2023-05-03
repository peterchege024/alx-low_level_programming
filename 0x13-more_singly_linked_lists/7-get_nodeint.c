#include "lists.h"
/**
* get_nodeint_at_index - returns node of anindex in a linked list
* @head: first node
* @index: index of node
* Return: The node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int k = 0;
listint_t *temp = head;
while (temp && k < index)
{
temp = temp->next;
k++;
}
return (temp ? temp : NULL);
}
