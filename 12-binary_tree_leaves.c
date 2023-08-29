#include "binary_trees.h"

int binary_tree_is_leaf(const binary_tree_t *node);

/**
 * binary_tree_leaves - function that counts the leaves of a binary tree.
 * @tree: pointer to the binary tree.
 * Return: the count of binary leaves, 0 othwerise.
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (!tree)
		return (0);

	leaves =  binary_tree_leaves(tree->left) +
	binary_tree_leaves(tree->right) + binary_tree_is_leaf(tree);

	return (leaves);
}

/**
 * binary_tree_is_leaf - function that check if a node is a leaf.
 * @node: is a pointer to the node.
 * Return: 1 if node is a leaf, 0 otherwise.
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!(node)->right && !(node)->left)
		return (1);
	else
		return (0);
}
