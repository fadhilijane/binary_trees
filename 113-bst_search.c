#include "binary_trees.h"

/**
 * bst_search - search for a value in a BST
 * @tree: pointer to the root node of BST to search
 * @value: value to search in the tree
 * Return: pointer to the node containing a value
 * equals to value or NULL if not found or if tree is NULL
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (!tree)
		return (NULL);
	if (value == tree->n)
		return ((bst_t *)tree);

	return ((value < tree->n) ? bst_search(tree->left, value) 
			: bst_search(tree->right, value));
}	
