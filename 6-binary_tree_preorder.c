#include "binary_trees.h"

/**
 * binary_tree_preorder - pre_order traversing
 * @tree: root node
 * @func: print_num func
 * Return: void
 */


void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
