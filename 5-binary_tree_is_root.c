#include "binary_trees.h"

/**
 * binary_tree_is_root - isRoot func
 * @node: given node
 * Return: on success 1, otherwise 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!node->parent)
		return (1);

	return (0);
}
