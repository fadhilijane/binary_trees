#include "binary_trees.h"

/**
 * size_t maximum - check the largest integer
 * @num1: the first integer
 * @num2: the second integer
 * Return: the largest num
 */

size_t maximum(int num1, int num2)
{
	if (num1 > num2)
		return (num1);
	return (num2);
}
/**
 * size_t binary_tree_height - measures the height of a binary tree
 * @tree: tree to be measured
 * Return: height of tree or 0 in no tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	return (maximum(left_height, right_height) + 1);
}
