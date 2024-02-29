#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 *
 * Return: Pointer to the lowest common ancestor node
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	if (!first || !second)
	return (NULL);

	if (first == second)
	return ((binary_tree_t *)first);

	if (binary_tree_is_descendant(first, second))
		return ((binary_tree_t *)second);

	if (binary_tree_is_descendant(second, first))
	return ((binary_tree_t *)first);

	return (binary_trees_ancestor(first->parent, second));
}

/**
 * binary_tree_is_descendant - Checks if a node is a descendant of another
 * @root: Pointer to the potential ancestor node
 * @node: Pointer to the potential descendant node
 *
 * Return: 1 if node is descendant of root, 0 otherwise
 */
int binary_tree_is_descendant(const binary_tree_t *root, const binary_tree_t *node)
{
	if (!root || !node)
		return (0);

	while (node != NULL)
{
	if (node == root)
		return (1);
	node = node->parent;
	}
	return (0);
}

