#include "binary_trees.h"

/**
 * binary_tree_inorder - function that prints data of a binary tree
 * in `inorder`.
 * @tree: pointer to the binary tree.
 * @func: pointer to the function that prints data.
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
