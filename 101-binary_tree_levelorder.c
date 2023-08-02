#include "binary_trees.h"

/**
 * binary_tree_levelorder - traverse a binary tree using level-order traversal
 * @tree: pointer to the root node of he tree to traverse
 * @func: pointer to a function to call for each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int front, rear;
	binary_tree_t *current;

	if (!tree || !func)
		return;

	binary_tree_t **queue = malloc(sizeof(binary_tree_t *) * 1000);
	if (!queue)
		return;

	front = 0;
	rear = 0;

	queue[rear] = (binary_tree_t *)tree;
	rear++;

	while (front < rear)
	{
		current = queue[front];
		front++;
		func(current->n);

		if (current->left != NULL)
		{
			queue[rear] = current->left;
			rear++;
		}

		if (current->right != NULL)
		{
			queue[rear] = current->right;
			rear++;
		}
	}
	free(queue);
}
