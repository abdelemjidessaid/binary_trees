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

/**
 * is_perfect - recursive function that check if a binary tree is perfect.
 * @tree: pointer to the binary tree.
 * Return: 1 if tree is perfect, 0 otherwise.
*/
int is_perfect(const binary_tree_t *tree)
{
	int L, R, H0, H1;

	if (tree->left && tree->right)
	{
		L = 1 && is_perfect(tree->left);
		R = 1 && is_perfect(tree->right);
		H0 = binary_tree_height(tree->left);
		H1 = binary_tree_height(tree->right);
		if (L == R && L && R && H0 == H1)
			return (1);
		return (0);
	}
	if (!(tree)->left && !(tree)->left)
		return (1);
	return (0);
}

/**
 * binary_tree_is_perfect - function that check if a binary tree is perfect.
 * @tree: pointer to the binary tree.
 * Return: 1 if the binary tree is perfect, 0 otherwise.
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (is_perfect(tree));
}
