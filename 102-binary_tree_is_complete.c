#include "binary_trees.h"

/**
 * binary_tree_is_complete - Checks if a binary tree is complete
 * @tree: Pointer to the root node of the tree to check
 * Return: 1 if complete, 0 otherwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_is_complete_util(tree, 0, binary_tree_size(tree)));
}

/**
 * binary_tree_is_complete_util - Utility function to check if a binary tree is complete
 * @tree: Pointer to the root node of the tree to check
 * @index: Index of the current node
 * @size: Total number of nodes in the tree
 * Return: 1 if complete, 0 otherwise
 */
int binary_tree_is_complete_util(const binary_tree_t *tree, size_t index, size_t size)
{
	if (!tree)
		return (1);

	if (index >= size)
		return (0);

	return (binary_tree_is_complete_util(tree->left, 2 * index + 1, size) &&
			binary_tree_is_complete_util(tree->right, 2 * index + 2, size));
}
