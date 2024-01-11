#include "binary_trees.h"

/**
 * binary_tree_depth - calc tree depth
 * @tree: root
 * Return: depth of root
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
