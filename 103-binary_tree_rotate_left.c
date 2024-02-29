#include "binary_trees.h"

/**
 * bst_insert - inserts a value in a Binary Search Tree
 * @tree: pointer to the root of the BST
 * @value: value to insert
 *
 * Return: pointer to the inserted node, or NULL on failure
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	if (!tree)
		return (NULL);

	if (!*tree)
	{
		*tree = binary_tree_node(NULL, value);
		if (!*tree)
			return (NULL);
		return (*tree);
	}

	if (value < (*tree)->n)
	{
		if (!(*tree)->left)
		{
			(*tree)->left = binary_tree_node(*tree, value);
			if (!(*tree)->left)
				return (NULL);
			return ((*tree)->left);
		}
		else
			return (bst_insert(&((*tree)->left), value));
	}
	else if (value > (*tree)->n)
	{
		if (!(*tree)->right)
		{
			(*tree)->right = binary_tree_node(*tree, value);
			if (!(*tree)->right)
				return (NULL);
			return ((*tree)->right);
		}
		else
			return (bst_insert(&((*tree)->right), value));
	}

	return (NULL); /* value already exists */
}
