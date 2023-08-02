#include "binary_trees.h"

/**
 * binary_trees_ancestor - find the lowest ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the lowest common ancestor or NULL if not found
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);
	if (first == second->parent || second == first->parent)
		return (first->parent);
	if (first->parent == second->parent)
		return (first->parent);
	return (binary_trees_ancestor(first->parent, second->parent));
}
