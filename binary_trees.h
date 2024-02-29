#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct binary_tree_s binary_tree_t;
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s bst_t;

typedef struct binary_tree_s avl_t;

typedef struct binary_tree_s heap_t;

typedef struct queue_s
{
	const binary_tree_t *node;
	struct queue_s *next;
} queue_t;

/* Function Prototypes */
void binary_tree_print(const binary_tree_t *);
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second);
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));
int binary_tree_is_complete(const binary_tree_t *tree);
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);
int binary_tree_is_bst(const binary_tree_t *tree);
bst_t *bst_insert(bst_t **tree, int value);

/* Helper Function Prototypes */
size_t binary_tree_size(const binary_tree_t *tree);
queue_t *enqueue(queue_t *rear, const binary_tree_t *node);
const binary_tree_t *dequeue(queue_t **front);
int binary_tree_is_bst_util(const binary_tree_t *tree, int min, int max);

#endif /* BINARY_TREES_H */
