#include "binary_trees.h"

/**
 * bst_insert - insert a value in binarry search tree
 * @tree: double pointer to the root node of the BST
 * @value: value to store in the node to insert
 * Return: pointer to the created node or NULL on failure
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	if (!tree)
		return (NULL);
	if (!*tree)
	{
		*tree = binary_tree_node(NULL, value);
		return (*tree);
	}

	if (value == (*tree)->n)
		return (NULL);

	if (value < (*tree)->n)
	{
		if ((*tree)->left == NULL)
		{
			(*tree)->left = binary_tree_node(*tree, value);
			return ((*tree)->left);
		}
		return (bst_insert(&((*tree)->left), value));
	}
	else
	{
		if ((*tree)->right == NULL)
		{
			(*tree)->right = binary_tree_node(*tree, value);
			return ((*tree)->right);
		}
		return (bst_insert(&((*tree)->right), value));
	}
}
