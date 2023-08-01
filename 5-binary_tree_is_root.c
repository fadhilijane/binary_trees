#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if node is root
 * @node: root or not
 * Return: 1 if node is a root otherwise 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	return (!node->parent);
}
