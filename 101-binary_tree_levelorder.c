#include "binary_trees.h"
#include "queue.h"

/**
 * binary_tree_levelorder - Goes through a binary tree using level-order
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	queue_t *queue = queue_create();
	if (!queue)
		return;

	queue_push(queue, (void *)tree);

	while (!queue_is_empty(queue))
	{
		const binary_tree_t *current = (const binary_tree_t *)queue_front(queue);
		queue_pop(queue);

		func(current->n);

		if (current->left)
			queue_push(queue, (void *)current->left);
		if (current->right)
			queue_push(queue, (void *)current->right);
	}

	queue_delete(queue);
}
