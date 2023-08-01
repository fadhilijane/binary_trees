#include "binary_trees.h"

/**
 * binary_tree_delete - deletes the entire tree
 * @tree: tree to be deleted
 * Return: empty tree
 */

void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *right, *left;

	if (tree != NULL)
	{
		left = tree->left;
		right = tree->right;
		free(tree);
		binary_tree_delete(left);
		binary_tree_delete(right);
	}
}
