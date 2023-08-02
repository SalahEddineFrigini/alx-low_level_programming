#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for my project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} tt;
int pop_listint(tt **head);
listint_t *get_nodeint_at_index(tt *head, unsigned int index);
int sum_listint(tt *head);
listint_t *insert_nodeint_at_index(tt **head, unsigned int idx, int n);
int delete_nodeint_at_index(tt **head, unsigned int index);
listint_t *reverse_listint(tt **head);
size_t print_listint_safe(const tt *head);
size_t print_listint(const tt *h);
size_t listint_len(const tt *h);
listint_t *add_nodeint(tt **head, const int n);
listint_t *add_nodeint_end(tt **head, const int n);
void free_listint(tt *head);
void free_listint2(tt **head);
size_t free_listint_safe(tt **h);
listint_t *find_listint_loop(tt *head);

#endif

