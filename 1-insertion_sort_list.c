#include "sort.h"
#include <stdio.h>

/**
	* swap - swaps two nodes in a doubly linked list
	* @node1: first node to swap
	* @node2: second node to swap
	* Description: swaps two nodes in a doubly linked list
	* Return: void
*/
void swap(listint_t *node1, listint_t *node2)
{
	node1->next = node2->next;
	if (node2->next != NULL)
	{
		node2->next->prev = node1;
	}
	if (node1->prev != NULL)
	{
		node1->prev->next = node2;
	}
	node2->prev = node1->prev;
	node1->prev = node2;
	node2->next = node1;
}

/**
	* insertion_sort_list - sorts a doubly linked list using insertion sort
	* @list: doubly linked list to sort
	* Description: sorts a doubly linked list using insertion sort
	* Return: void
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *current;
	listint_t *tmp;

	if (*list == NULL)
		return;

	current = *list;
	current = current->next;
	while (current != NULL)
	{
		tmp = current;
		while (tmp->prev != NULL && tmp->n < tmp->prev->n)
		{
			swap(tmp->prev, tmp);
			if (tmp->prev == NULL)
			{
				*list = tmp;
			}
			print_list(*list);
		}
		current = current->next;
	}

}
