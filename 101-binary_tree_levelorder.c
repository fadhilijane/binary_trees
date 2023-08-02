#include "binary_trees.h"

/**
 * binary_tree_levelorder - goes through a binary tree
 * using level order traversal
 * @func: function to call each node
 * @tree: tree to traverse
 * Return: 
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int)) 
