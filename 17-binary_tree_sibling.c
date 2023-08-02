#include "binary_trees.h"

/**
 * binary_tree_sibling - find the sibling of a node in a binary tree
 * @node: pointer to the node to find the sibling
 * Return: pointer to the sibling node or NULL if no sibling or node is NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
