#include "binary_trees.h"

/**
 * binary_tree_depth - function that measure the depth of a binary three node.
 * @tree: pointer to the binary three node.
 * Return: the depth of a node, 0 otherwise.
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *pointer = tree;
	size_t depth = 0;

	if (!tree)
		return (0);

	while (pointer->parent)
	{
		depth++;
		pointer = pointer->parent;
	}

	return (depth);
}
