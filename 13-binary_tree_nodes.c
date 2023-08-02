#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes
 * with at least 1 child in a binary tree
 * @tree: pointer to the root of tree
 * Return: number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (!tree)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
		nodes += 1;
	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);

	return (nodes);
}
