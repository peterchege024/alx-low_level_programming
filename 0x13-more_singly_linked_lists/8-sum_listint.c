#include "lists.h"
/**
* sum_listint - computes sum of all the data in listint_t list
* @head: first node
* Return: sum
*/
int sum_listint(listint_t *head)
{
int sm = 0;
listint_t *temp = head;
while (temp)
{
sm += temp->n;
temp = temp->next;
}
return (sm);
}
