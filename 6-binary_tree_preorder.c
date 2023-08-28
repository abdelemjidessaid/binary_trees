#include "binary_trees.h"

/**
 * binary_tree_preorder - function that prints data of
 * a binary tree in `preorder`.
 * @tree: pointer to the binary tree.
 * @func: pointer to the function that prints the data.
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
