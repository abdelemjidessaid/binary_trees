#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a new node in the left
 * child of the parent node.
 * @parent: the parent or root node's pointer.
 * @value: the value of the new node.
 * Return: the pointer of the new node if created, NULL otherwise.
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp;

	if (!parent)
		return (NULL);

	if (!(parent)->left)
	{
		parent->left = binary_tree_node(parent, value);
		return (parent->left);
	}
	else
	{
		tmp = parent->left;
		parent->left = binary_tree_node(parent, value);
		parent->left->left = tmp;
		tmp->parent = parent->left;
		return (parent->left);
	}

	return (NULL);
}
