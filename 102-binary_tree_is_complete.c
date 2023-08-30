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
 * binary_tree_sibling - function that finds the sibling of nodes.
 * @node: pointer to the node.
 * Return: pointer to the sibling, NULL otherwise.
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (!node || !(node)->parent)
		return (NULL);

	parent = node->parent;
	if (parent->left == node)
		return (parent->right);
	else
		return (parent->left);

	return (NULL);
}

/**
 * is_complete - function that check if a binary tree is complete.
 * @tree: pointer to binary tree.
 * Return: 1 if complete, 0 otherwise.
*/
int is_complete(const binary_tree_t *tree)
{
	binary_tree_t *sibling;
	size_t L, R;

	if (!tree)
		return (1);
	if (!(tree)->left && tree->right)
		return (0);
	if (tree->left && !(tree)->right)
	{
		if (tree->left->left || tree->left->right)
			return (0);
		sibling = binary_tree_sibling((binary_tree_t *) tree);
		if (sibling->left && !(sibling)->right)
			return (0);
	}
	L = binary_tree_height(tree->left);
	R = binary_tree_height(tree->right);
	if (R > L)
		return (0);

	return (1 && is_complete(tree->left) && is_complete(tree->right));
}

/**
 * binary_tree_is_complete - function that check if a binary tree is complete.
 * @tree: pointer to the binary tree.
 * Return: 1 if it is a complete binary tree, 0 otherwise.
*/
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (is_complete(tree));
}
