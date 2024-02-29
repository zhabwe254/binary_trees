#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stdlib.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
<<<<<<< HEAD
=======
#include <string.h>
#include <unistd.h>
#include <math.h>
#include <limits.h>
>>>>>>> 5961af32777a6bed128113bb837775ce506bde2f

/* Basic Binary Tree Structure */
typedef struct binary_tree_s {
	int n;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
	struct binary_tree_s *parent;
} binary_tree_t;
typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;

/* binary_tree_print.c */
void binary_tree_print(const binary_tree_t *);


/* Binary Search Tree Structure */
typedef struct binary_tree_s bst_t;

/* AVL Tree Structure */
typedef struct binary_tree_s avl_t;

/* Max Binary Heap Structure */
typedef struct binary_tree_s heap_t;

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

/* helper functions */
int _pow_recursion(int x, int y);
binary_tree_t *bta_helper(binary_tree_t *root, const binary_tree_t *first,
			  const binary_tree_t *second);
void btlo_helper(const binary_tree_t *tree, void (*func)(int), size_t level);
int btic_helper(const binary_tree_t *tree, size_t index, size_t size);
int btib_helper(const binary_tree_t *tree, int low, int hi);
bst_t *bst_min_val(bst_t *root);
int btia_helper(const binary_tree_t *tree, int low, int hi);
int btih_helper(const binary_tree_t *tree);
void sata_helper(avl_t **root, int *array, size_t lo, size_t hi);

#endif /* BINARY_TREES_H */

