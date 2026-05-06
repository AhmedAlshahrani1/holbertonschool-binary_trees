#include "binary_trees.h"

/**
 * tree_is_perfect - Helper function to check perfection and return height
 * @tree: Pointer to the node to check
 *
 * Return: Height of the tree if perfect, -1 if not perfect
 */
int tree_is_perfect(const binary_tree_t *tree)
{
if (tree == NULL)
	return (0);
if (tree->left == NULL && tree->right == NULL)
{
	return (1);
}
if (binary_tree_is_full(tree) && binary_tree_height(tree->left) == binary_tree_height(tree->right))
{
return (tree_is_perfect(tree->left) && tree_is_perfect(tree->right));
}
}
