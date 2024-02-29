#include "binary_trees.h"

/**
 * binary_tree_preorder - Function to perform pre-order traversal on a binary tree 
 * @tree: the tree to traverse 
 * @func: Call the function for the current node's value
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
