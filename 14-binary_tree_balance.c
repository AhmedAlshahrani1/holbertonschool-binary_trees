#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: The balance factor. If tree is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int hleft;
int hright;
if (tree == NULL)
{
return (0);
}
hleft = (int)binary_tree_height(tree->left);
hright = (int)binary_tree_height(tree->right);
return (hleft - hright);
}
