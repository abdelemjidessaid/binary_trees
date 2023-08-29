#include "binary_trees.h"

/**
 * binary_tree_levelorder - function that goes through a binary tree
 * with level order.
 * @tree: pointer to the binary tree.
 * @func: pointer to the function that prints the data.
*/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	if (tree->parent == NULL)
		func(tree->n);
	if (tree->left)
		func(tree->left->n);
	if (tree->right)
		func(tree->right->n);
	binary_tree_levelorder(tree->left, func);
	binary_tree_levelorder(tree->right, func);
}
