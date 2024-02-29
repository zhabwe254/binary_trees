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
new = malloc(sizeof(binary_tree_t));
if (new == NULL)
return (NULL); /* insufficient memory */
new->n = value;
new->left = NULL;
new->right = NULL;
new->parent = parent;
return (new);
}
