#include "binary_trees.h"

/**
 * binary_tree_node - it creates a new node
 * @parent: it's the parent node
 * @value: it's the data for teh node
 */


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return NULL;

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
