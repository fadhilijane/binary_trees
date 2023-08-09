#include "binary_trees.h"

/**
 * bst_remove - removes a node from a binary search tree
 * @root: pointer to the root node of the tree
 * @value: the value to remove from the tree
 * Return: pointer to new root node of the tree
 * after removal of desired value
 */
bst_t *bst_remove(bst_t *root, int value)
{
	if (!root)
		return (NULL);

	if (value < root->n)
		root->left = bst_remove(root->left, value);
	else if (value > root->n)
		root->right = bst_remove(root->right, value);
	else
	{
		if (!root->left)
		{
			bst_t *temp = root->right;

			free(root);
			return (temp);
		}
		else if (!root->right)
		{
			bst_t *temp = root->left;

			free(root);
			return (temp);
		}
		bst_t *temp = bst_min_value_node(root->right);

		root->n = temp->n;
		root->right = bst_remove(root->right, temp->n);
	}

	return (root);
}

/**
 * bst_min_value_node - finds the node with min value in BST
 * @node: pointer to the root node of tree
 * Return: a pointer to the node with the minimum value
 */
bst_t *bst_min_value_node(bst_t *node)
{
	while (node && node->left)
		node = node->left;
	return (node);
}
