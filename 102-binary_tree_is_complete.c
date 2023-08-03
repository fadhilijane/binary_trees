#include "binary_trees.h"

/**
 * binary_tree_is_complet - checks if binary tree is complete
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if tree is  complet otherwise 0
 */
int  binary_tree_is_complete(const binary_tree_t *tree)
{
	int front, rear, incomplete_node;
	binary_tree_t *current, **queue;

	if (!tree)
		return (0);

	queue = malloc(sizeof(binary_tree_t *) * 1000);
	if (!queue)
		return (0);

	front = 0;
	rear = 0;
	incomplete_node = 0;

	queue[rear] = (binary_tree_t *)tree;
	rear++;

	while (front < rear)
	{
		current = queue[front];
		front++;

		if (current->left)
		{
			if (incomplete_node)
			{
				free(queue);
				return (0);
			}
			queue[rear] = current->left;
			rear++;
		}
		else 
		{
			incomplete_node = 1;
		}

		if (current->right)
		{
			if (incomplete_node)
			{
				free(queue);
				return (0);
			}
			queue[rear] = current->right;
			rear++;
		}
		else
		{
			incomplete_node = 1;
		}
	}
	free(queue);
	return (1);
}
