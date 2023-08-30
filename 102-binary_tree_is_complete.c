#include "binary_trees.h"


/**
 * new_node - function that creates new node in a linked_list
 * @node: pointer of node to be created
 * Return: the node created, NULL otherwise.
 */
_link *new_node(binary_tree_t *node)
{
	_link *new =  malloc(sizeof(_link));

	if (new == NULL)
		return (NULL);
	new->node = node;
	new->next = NULL;

	return (new);
}


/**
 * free_node - function that free the nodes at the linked list.
 * @head: pointer to node of the linked_list.
 */
void free_node(_link *head)
{
	_link *temp_node;

	while (head)
	{
		temp_node = head->next;
		free(head);
		head = temp_node;
	}
}


/**
 * push_node - function that pushes a node into the stack.
 * @node: pointer of node of the tree
 * @head: pointer to head node of in the stack
 * @tail: pointer to tail node of in the stack
 */
void push_node(binary_tree_t *node, _link *head, _link **tail)
{
	_link *new;

	new = new_node(node);
	if (new == NULL)
	{
		free_node(head);
		exit(1);
	}
	(*tail)->next = new;
	*tail = new;
}


/**
 * pop_node - function that pops a node into the stack.
 * @head: pointer to head node of in the stack
 */
void pop_node(_link **head)
{
	_link *temp_node;

	temp_node = (*head)->next;
	free(*head);
	*head = temp_node;
}


/**
 * binary_tree_is_complete - Function that checks if a binary tree is complete
 * @tree: Type pointer of node of the tree
 * Return: 1 if is complete 0 if it is not
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	_link *head, *tail;
	int flag = 0;

	if (!tree)
		return (0);

	head = tail = new_node((binary_tree_t *)tree);
	if (!head)
		exit(1);

	while (head)
	{
		if (head->node->left)
		{
			if (flag)
			{
				free_node(head);
				return (0);
			}
			push_node(head->node->left, head, &tail);
		}
		else
			flag = 1;
		if (head->node->right)
		{
			if (flag)
			{
				free_node(head);
				return (0);
			}
			push_node(head->node->right, head, &tail);
		}
		else
			flag = 1;
		pop_node(&head);
	}
	return (1);
}
