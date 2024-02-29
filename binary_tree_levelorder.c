#include "binary_trees.h"

/**
 * binary_tree_levelorder - Goes through a binary tree using level-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Description: If tree or func is NULL, do nothing
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	queue_t *front = NULL, *rear = NULL;
	const binary_tree_t *current = NULL;

	rear = enqueue(rear, tree);

	while (front)
	{
		current = dequeue(&front);
		func(current->n);

		if (current->left)
			rear = enqueue(rear, current->left);

		if (current->right)
			rear = enqueue(rear, current->right);
	}
}
