#include "binary_trees.h"

/**
 * array_to_bst - build a binary search tree from an array
 * @array: pointer to the first element of the array to be converted
 * @size: number of elements in the array
 * Return: a pointer to the root node of the created BST or NULL on failure
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *tree = NULL;
	size_t i;

	if (!array || size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		bst_insert(&tree, array[i]);
	return (tree);
}
