#include "binary_trees.h"


/**
 * binary_trees_ancestor - function that finds the the lowest
 * common ancestor of two nodes.
 * @first: pointer to the first node.
 * @second: pointer to the second node.
 * Return: pointer to ancestor's node, NULL otherwise.
*/
binary_tree_t *binary_trees_ancestor(
	const binary_tree_t *first, const binary_tree_t *second
)
{
	const binary_tree_t *F, *S;

	if (!first || !second || !(first)->parent || !(second)->parent)
		return (NULL);

	F = first;
	while (F)
	{
		S = second;
		while (S)
		{
			if (F == S)
				return ((binary_tree_t *) S);
			S = S->parent;
		}
		F = F->parent;
	}

	return (NULL);
}
