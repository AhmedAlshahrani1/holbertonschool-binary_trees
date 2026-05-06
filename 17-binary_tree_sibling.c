#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: A pointer to the node to find the sibling
 *
 * Return: A pointer to the sibling node,
 * or NULL if node is NULL, parent is NULL, or no sibling exists.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
	return (NULL);
if (node->parent == parent->left)
	return (parent->right);
if (node->parent == parent->right)
	return (parent->left);
}
