#include "binary_trees.h"

/**
 * binary_tree_delete - deletes the entire tree
 * @tree: tree to be deleted
 * Return: empty tree
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	/*traverse for rcursion deletion*/
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
