#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a new node as left child
 * of the parent node.
 * @parent: pointer to the root node.
 * @value: the value of the new node.
 * Return: pointer to the new node if created, NULL otherwise.
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp;

	if (!parent)
		return (NULL);

	if (!(parent)->right)
	{
		parent->right = binary_tree_node(parent, value);
		return (parent->right);
	}
	else
	{
		tmp = parent->right;
		parent->right = binary_tree_node(parent, value);
		parent->right->right = tmp;
		tmp->parent = parent->right;
		return (parent->right);
	}

	return (NULL);
}
