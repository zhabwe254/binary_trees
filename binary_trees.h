#ifndef BINARY_TREESi_H
#define BINARY_TREES_H

#include <stdlib.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
#include <limits.h>

/* Basic Binary Tree Structure */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binaryi_tree_s *left;
	struct binary_tree_s *right;
}

typedef struct binary_tree_s binary_tree_t;

/* Binary Search Tree */
typedef struct binary_tree_s bst_t;

/* AVL Tree */
typedef struct binary_tree_s avl_t;

/* Max Binary Heap */
typedef struct binary_tree_s heap_t;

/* Print function */
void binary_tree_print(const binary_tree_t *tree);

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
void binary_tree_delete(binary_tree_t *tree);
int binary_tree_is_leaf(const binary_tree_t *node);
int binary_tree_is_root(const binary_tree_t *node);
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
size_t binary_tree_height(const binary_tree_t *tree);
size_t binary_tree_depth(const binary_tree_t *tree);
size_t binary_tree_size(const binary_tree_t *tree);
size_t binary_tree_leaves(const binary_tree_t *tree);
size_t binary_tree_nodes(const binary_tree_t *tree);
int binary_tree_balance(const binary_tree_t *tree);
int binary_tree_is_full(const binary_tree_t *tree);
int binary_tree_is_perfect(const binary_tree_t *tree);
binary_tree_t *binary_tree_sibling(binary_tree_t *node);
binary_tree_t *binary_tree_uncle(binary_tree_t *node);
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,const binary_tree_t *second);
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));
int binary_tree_is_complete(const binary_tree_t *tree);
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);
int binary_tree_is_bst(const binary_tree_t *tree);
bst_t *bst_insert(bst_t *tree, int value);
/* Helper functions - Moved here because of Betty */
void create_queue(binary_tree_t *tree, q_node *head, q_node *tail,m q_node *(*func)(binary_tree_t *, q_node *, q_node *));
bst_t *array_to_bst(int *array, size_t size);
bst_t *bst_search(const bst_t *tree, int value);
bst_t *bst_remove(bst_t *root, int value);
int binary_tree_is_avl(const binary_tree_t *tree);
avl_t *avl_insert(avl_t *tree, int value);
avl_t *array_to_avl(int *array, size_t size);
avl_t *avl_remove(avl_t *root, int value);
avl_t *sorted_array_to_avl(int *array, size_t size);
int binary_tree_is_heap(const binary_tree_t *tree);
heap_t *heap_insert(heap_t **root, int value);
heap_t *array_to_heap(int *array, size_t size);
int heap_extract(heap_t **root);
int *heap_to_sorted_array(heap_t *heap, size_t *size);

/* Print Function */
/* Task 0 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/* Task 1 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

/* Task 2 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

/* Task 3 */
void binary_tree_delete(binary_tree_t *tree);

/* Task 4 */
int binary_tree_is_root(const binary_tree_t *node);

/* Task 5 */
size_t binary_tree_height(const binary_tree_t *tree);

/* Task 6 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));

/* Task 7 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));

/* Task 8 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));

/* Task 9 */
size_t binary_tree_nodes(const binary_tree_t *tree);

/* Task 10 */
int binary_tree_is_full(const binary_tree_t *tree);

/* Task 11 */
int binary_tree_is_complete(const binary_tree_t *tree);

/* Task 12 */
int binary_tree_balance(const binary_tree_t *tree);

/* Task 13 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);

/* Task 14 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);

/* Task 15 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

/* Task 16 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

/* Task 17 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));

/* Task 18 */
int binary_tree_is_perfect(const binary_tree_t *tree);

/* Task 19 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second);

/* Task 20 */
bst_t *bst_insert(bst_t **tree, int value);

/* Task 21 */
bst_t *array_to_bst(int *array, size_t size);

/* Task 22 */
int binary_tree_is_bst(const binary_tree_t *tree);

/* Task 23 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second);

/* Task 24 */
int binary_tree_is_bst(const binary_tree_t *tree);

/* Task 25 */
bst_t *bst_insert(bst_t **tree, int value);

/* Task 26 */
bst_t *array_to_bst(int *array, size_t size);

/* Task 27 */
bst_t *bst_search(const bst_t *tree, int value);

/* Task 28 */
bst_t *bst_remove(bst_t *root, int value);

/* Task 29 */
void binary_tree_print(const binary_tree_t *);



#endif /* BINARY_TREES_H */
i
