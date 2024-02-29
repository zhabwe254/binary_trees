#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_node -Function to create a new binary tree node
 * @parent: Pointer to the parent node
 * @value: value to put in the new node
 *
 * Return: Return a pointer to the new node
 *         NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (!node)
		return (node);
	node->n = value;
	node->left = NULL;
	node->right = NULL;
	node->parent = parent;
	return (node);
}
