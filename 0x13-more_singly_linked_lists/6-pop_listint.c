#include "lists.h"
/**
* pop_listint - deletes head node of linked list
* @head: first element
* Return: the data inside the elements previously.
*/
int pop_listint(listint_t **head)
{
listint_t *temp;
int num;
if (!head || !*head)
return (0);
num = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;
return (num);
}
