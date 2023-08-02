#include "binary_trees.h"

/**
 * binary_tree_height - measure the height of binary tree
 * @tree: pointer to the root of the tree to measure the height
 * Return: height of the binary tree or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree)
		return (0);
	/**
	 * if (tree->left == NULL && tree->right == NULL)
	 *return (0);
	 */

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 * binary_tree_balance - measure the balance factor of binary tree
 * @tree: pointer to the root of the tree to meausure the balnce factor
 * Return: balance factor of binary tree or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (!tree)
		return (0);
	left_height = (int)binary_tree_height(tree->left);
	right_height = (int)binary_tree_height(tree->right);

	return (left_height - right_height);
}
