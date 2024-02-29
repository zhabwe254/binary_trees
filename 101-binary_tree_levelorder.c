#include "binary_trees.h"

/**
 * binary_tree_is_bst - checks if a binary tree is a valid Binary Search Tree
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if valid BST, 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (bst_helper(tree, NULL, NULL));
}

/**
 * bst_helper - helper function to check if a tree is a valid BST
 * @tree: pointer to the root node of the tree
 * @min: pointer to the minimum value in the tree
 * @max: pointer to the maximum value in the tree
 *
 * Return: 1 if valid BST, 0 otherwise
 */
int bst_helper(const binary_tree_t *tree, const binary_tree_t *min, const binary_tree_t *max)
{
	if (!tree)
		return (1);

	if ((min && tree->n <= min->n) || (max && tree->n >= max->n))
		return (0);

	return (bst_helper(tree->left, min, tree) && bst_helper(tree->right, tree, max));
}
