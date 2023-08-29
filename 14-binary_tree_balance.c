#include "binary_trees.h"


size_t binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_balance - function that measures the balance factor of
 * a binary tree.
 * @tree: pointer to the binary tree.
 * Return: balance factor, 0 otherwise.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}

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

	l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
	r = tree->right ? 1 + binary_tree_height(tree->right) : 1;

	return (l > r ? l : r);
}
