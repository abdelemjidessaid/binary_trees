#include "binary_trees.h"


int binary_tree_is_leaf(const binary_tree_t *node);

/**
 * binary_tree_nodes - function that counts the nodes that contains at least
 * one child.
 * @tree: pointer to the binary tree.
 * Return: number of nodes that contains at least 1 child, 0 otherwise.
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (!tree)
		return (0);

	nodes = binary_tree_nodes(tree->left) +
	binary_tree_nodes(tree->right) + (!binary_tree_is_leaf(tree));

	return (nodes);
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
