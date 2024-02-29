#include "binary_trees.h"

/**
 * binary_tree_is_avl - checks if a binary tree is a valid AVL Tree
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if valid AVL Tree, 0 otherwise
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	int height_diff;

	if (!tree)
		return (1);

	if (!binary_tree_is_bst(tree))
		return (0);

	height_diff = binary_tree_height(tree->left) - binary_tree_height(tree->right);

	if (height_diff > 1 || height_diff < -1)
		return (0);

	if (!binary_tree_is_avl(tree->left) || !binary_tree_is_avl(tree->right))
		return (0);

	return (1);
}
