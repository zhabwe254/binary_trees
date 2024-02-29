#include "binary_trees.h"

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
	binary_tree_t *new;

	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL); 

	new->n = value;
	new->left = new->right = NULL;
	new->parent = parent;

	if (new->parent == NULL) 
		return new;
	if (new->n < parent->n)
		parent->left = new;
	else
		parent->right = new;
	return new;
}
