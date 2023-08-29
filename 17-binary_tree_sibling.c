#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the sibling of nodes.
 * @node: pointer to the node.
 * Return: pointer to the sibling, NULL otherwise.
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (!node || !(node)->parent)
		return (NULL);

	parent = node->parent;
	if (parent->left == node)
		return (parent->right);
	else
		return (parent->left);

	return (NULL);
}
