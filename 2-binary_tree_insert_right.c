#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node as the right child
 * @parent: node where the newnode is inserted
 * @value: value of node
 * Return: pointer to node created or NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (!parent)
		return (NULL);
	new_node = binary_tree_node(parent, value);
	if (!newnode)
		return (NULL);
	if (parent->right)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}

	parent->right = new_node;
	return (new_node);
}
