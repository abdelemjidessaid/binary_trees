#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of binary tree.
 * @tree: pointer to the binary tree.
 * Return: the size of the binary tree, 0 otherwise.
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	if (!tree)
		return (0);

	size = binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1;

	return (size);
}
