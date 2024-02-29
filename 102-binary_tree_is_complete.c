#include "binary_trees.h"

/**
 * binary_tree_is_avl - checks if a binary tree is a valid AVL Tree
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if valid AVL Tree, 0 otherwise
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (avl_helper(tree, NULL, NULL));
}

/**
 * avl_helper - helper function to check if a tree is a valid AVL Tree
 * @tree: pointer to the root node of the tree
 * @min: pointer to the minimum value in the tree
 * @max: pointer to the maximum value in the tree
 *
 * Return: 1 if valid AVL Tree, 0 otherwise
 */
int avl_helper(const binary_tree_t *tree, const binary_tree_t *min, const binary_tree_t *max)
{
	int left_height, right_height, diff;

	if (!tree)
		return (1);

	if ((min && tree->n <= min->n) || (max && tree->n >= max->n))
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	diff = left_height - right_height;

	if (diff > 1 || diff < -1)
		return (0);

	return (avl_helper(tree->left, min, tree) && avl_helper(tree->right, tree, max));
}
