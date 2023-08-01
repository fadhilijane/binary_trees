#include "binary_trees.h"

/**
 * binary_tree_preorder - traverse a binary tree using preorder traversal
 * @tree: pointer to the root node at the tree to traverse
 * @func: pointer to the function to call for each node
 * 	the value in the node must be passed as a parameter  to this fucntion
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	/*call func on cur node*/
	func(tree->n);

	/*traverse left*/
	binary_tree_preorder(tree->left, func);

	/*traverse right*/
	binary_tree_preorder(tree->right, func);
}
