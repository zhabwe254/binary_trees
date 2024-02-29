#include "binary_trees.h"

/**
 * binary_tree_rotate_right - performs a right-rotation on a binary tree
 * @tree: a pointer to the root node of the tree to rotate
 *
 * Return: Pointer to the new root node of the tree once rotated
 *         NULL upon failure
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new_root = NULL, *tmp = NULL, *parent = NULL;

	if (!tree || !tree->left)
		return (NULL);

	new_root = tree->left;
	tmp = new_root->right;
	parent = tree->parent;

	new_root->right = tree;
	tree->left = tmp;

	if (tmp)
		tmp->parent = tree;

	tree->parent = new_root;
	new_root->parent = parent;

	if (parent)
	{
		if (parent->left == tree)
			parent->left = new_root;
		else
			parent->right = new_root;
	}

	return (new_root);
}

