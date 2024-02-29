#include "binary_trees.h"

/**
 * binary_tree_node - It creates a binary tree node.
 * @value: The valuee to insert into the new node.
 * @parent: A Node to be created by the pointer of the parent
 *
 * Return: If an error shows - NULL.
 *         Otherwisee - a poiinter to the new nodee.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
