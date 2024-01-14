#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

        if (tree->left)
            l = 1 + binary_tree_height(tree->left);
        else
            l = 1;

        if (tree->right)
            r = 1 + binary_tree_height(tree->right);
        else
            r = 1;

		return ((l > r) ? l : r);
	}
	return (0);
}

/**
 *binary_tree_balance - a function that
 * measures the balance factor of a binary tree
 *@tree: pointer to the root of the tree
 *
 *Return: the height of the left nodes - the height of the right nodes
 */
int binary_tree_balance(const binary_tree_t *tree)
{
    if (!tree)
        return (0);

    return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}