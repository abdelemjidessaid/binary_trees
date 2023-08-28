#include "binary_trees.h"

/**
 * binary_tree_delete - function that deletes the binary trees.
 * @tree: pointer to the binary tree.
*/
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *root = tree;

	if (!tree)
		return;

	binary_tree_delete(root->left);
	binary_tree_delete(root->right);
	free(root);
}
