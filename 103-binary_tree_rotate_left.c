#include "binary_trees.h"


/**
 * binary_tree_rotate_left - function that rotate a binary tree to left.
 * @tree: pointer to binary tree.
 * Return: pointer to the new root, NULL otherwise.
*/
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *pivot;

	if (!tree || !(tree)->right)
		return (NULL);

	pivot = tree->right;
	tree->right = pivot->left;
	if (tree->right)
		tree->right->parent = tree;
	pivot->parent = tree->parent;
	tree->parent = pivot;
	pivot->left = tree;

	return (pivot);
}
