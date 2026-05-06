#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: The height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL)
	{
		left_height = binary_tree_height(tree->left) + 1;
	}
	if (tree->right != NULL)
	{
		right_height = binary_tree_height(tree->right) + 1;
	}
	if (left_height >= right_height)
	{
		return (left_height);
	}
	else
	{
		return (right_height);
	}
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: The balance factor, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int hleft = 0;
	int hright = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left)
	{
		hleft = (int)binary_tree_height(tree->left) + 1;
	}
	if (tree->right)
	{
		hright = (int)binary_tree_height(tree->right) + 1;
	}
	return (hleft - hright);
}
