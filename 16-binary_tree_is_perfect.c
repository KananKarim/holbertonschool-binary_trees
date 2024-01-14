#include "binary_trees.h"
/**
 * _binary_tree_height - local function.
 * @tree: A pointer to the root node of the tree to check.
 * Return: Data.
 */
size_t _binary_tree_height(const binary_tree_t *tree)
{
	int r_height, l_height;

	if (!tree)
		return (0);
	r_height = _binary_tree_height(tree->right);
	l_height = _binary_tree_height(tree->left);
	return (1 + ((r_height >= l_height) ? r_height : l_height));
}

/**
 * _binary_tree_balance - local function.
 * @tree: A pointer to the root node of the tree to check.
 * Return: Data.
 */
int _binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (_binary_tree_height(tree->left) - _binary_tree_height(tree->right));
}

/**
 * sub_tree_perfect - The function which we use for
 * @tree: A pointer to the root node of the tree to check
 * Return: 1 or 0.
 */

int sub_tree_perfect(const binary_tree_t *tree)
{
<<<<<<< HEAD
	if (tree && !tree->right & !tree->left)
		return (1);
	if (tree && tree->right && tree->left)
		return (1 && sub_tree_perfect(tree->left)
				&& sub_tree_perfect(tree->right));
	return (0);
=======
        if (tree && !tree->right && !tree->left)
                return (1);

        if (tree && tree->right && tree->left)
                return (1 && sub_tree_perfect(tree->left)
                && sub_tree_perfect(tree->right));
        return (0);
>>>>>>> 3a063416d846ab7efeb975c3e12a7ecc89b113cc
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If tree is NULL or not perfect, 0.
 *         Otherwise, 1.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (_binary_tree_balance(tree) != 0)
		return (0);
	return (sub_tree_perfect(tree->left) && sub_tree_perfect(tree->right));
}

