#include "binary_trees.h"


/**
 * binary_tree_height - function that measure the height of a binary tree.
 * @tree: pointer to the binary tree.
 * Return: height of the binary tree, 0 otherwise.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l, r;

	if (!tree)
		return (0);

	l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	r = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return (l > r ? l : r);
}
