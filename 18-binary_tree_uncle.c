#include "binary_trees.h"

/**
 * binary_tree_uncle - find the uncle of a node in a binary tree
 * @node: pointer to the node to find the uncle
 * Return: pointer to the uncle or NULL if no uncle or node is NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandparent;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	grandparent = node->parent->parent;
	if (grandparent->left == node->parent)
		return (grandparent->right);
	else
		return (grandparent->left);
}
