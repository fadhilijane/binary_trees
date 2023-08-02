#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if binary tree is full
 * @tree: is a pointer to root of tree
 * Return: 0 if no tree or 1
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);

	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
