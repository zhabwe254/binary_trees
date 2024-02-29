#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - As the left-child of another node insert a node
 * @parent: pointer to the node to insert the left-child in
 * @value: Value of the new node to be stored
 *
 * Return: Return a pointer to the new node
 *         NULL on failure
 *         NULL if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *temp = NULL, *node = NULL;

	if (!parent)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	if (parent->left)
	{
		temp = parent->left;
		node->left = temp;
		temp->parent = node;
	}
	parent->left = node;
	return (node);
}
