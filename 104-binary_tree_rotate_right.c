#include "binary_trees.h"


/**
 * binary_tree_rotate_right - function that rotate a binary tree to right.
 * @tree: pointer to binary tree.
 * Return: pointer to the new root node, NULL otherwise.
*/
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *pivot;

	if (!tree || !(tree)->left)
		return (NULL);

	pivot = tree->left;
	tree->left = pivot->right;
	if (tree->left)
		tree->left->parent = tree;
	pivot->parent = tree->parent;
	tree->parent = pivot;
	pivot->right = tree;

	return (pivot);
}
