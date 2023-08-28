#include "binary_trees.h"


/**
 * binary_tree_node - function that creates new node into a binary tree.
 * @parent: pointer to the head of tree.
 * @value: the value of the new binary tree node.
 * Return: pointer to the new node if created, NULL otherwise.
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (!node)
		return (NULL);

	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;

	return (node);
}
