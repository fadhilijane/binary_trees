#include "binary_trees.h"

/**
 * binary_tree_depth - measure the depth of a node in binary tree
 * @tree: pointer to the node to measure the depth
 * Return: the depth of the node or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);
	/*traverse while parent !NULL*/
	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
