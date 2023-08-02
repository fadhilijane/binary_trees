#include "binary_trees.h"

/**
 * binary_trees_ancestor - find the lowest ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the lowest common ancestor or NULL if not found
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	const binary_tree_t *current1, *current2;

	if (!first || !second)
		return (NULL);

	current1 = first;
	while (current1 != NULL)
	{
		current2 = second;
		while (current2 != NULL)
		{
			if (current1 == current2)
				return ((binary_tree_t *)current1);
			current2 = current2->parent;
		}
		current1 = current1->parent;
	}
	return (NULL);
}
