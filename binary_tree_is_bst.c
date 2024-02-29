#include "binary_trees.h"

/**
 * binary_tree_is_bst - Checks if a binary tree is a valid BST
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if tree is a valid BST, 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	return (bst_helper(tree, INT_MIN, INT_MAX));
}

/**
 * bst_helper - Helper function to check if a binary tree is a valid BST
 * @tree: Pointer to the root node of the tree to check
 * @min: Minimum value allowed
 * @max: Maximum value allowed
 *
 * Return: 1 if tree is a valid BST, 0 otherwise
 */
int bst_helper(const binary_tree_t *tree, int min, int max)
{
	if (!tree)
		return (1);

	if (tree->n <= min || tree->n >= max)
		return (0);

	return (bst_helper(tree->left, min, tree->n) &&
			bst_helper(tree->right, tree->n, max));
}
