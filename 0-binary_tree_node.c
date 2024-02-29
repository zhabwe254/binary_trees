#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_node - Create a binary tree node
 * @parent: Pointer to the parent node
 * @value: value of the node
 *
 * Return: Return a pointer to the new node
 *
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
