#include "binary_trees.h"

/**
 * is_bst_recursive - checks if bst is recursive
 * @node: to check the current node
 * @min: The value of smallest node
 * @max: The value of largest node
 * Return: 1 if bst is satisfied or 0
 */

int  is_bst_recursive(const binary_tree_t *node, int min, int max)
{
	if (!node)
		return (1);
	if (node->n <= min || node->n >= max)
		return (0);
	return (is_bst_recursive(node->left, min, node->n) &&
		is_bst_recursive(node->right, node->n, max));
}

/**
 * binary_tree_is_bst -  function that checks if a binary tree is a valid
 * @tree: pointer to the root of the tree to check
 * Return: 1 if tree is a valid BST, and 0 otherwise
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (is_bst_recursive(tree, INT_MIN, INT_MAX));
}
