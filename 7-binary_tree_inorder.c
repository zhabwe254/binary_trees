#include "binary_trees.h"

/**
 * binary_tree_inorder - A function to perform in-order traversal on a binary tree
 * @tree: tree to traverse
 * @func: Call the function for the current node's value 
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}