#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: Pointer to the root node of the tree to delete
 *
 * Description: If tree is NULL, the function does nothing.
 */
void binary_tree_delete(binary_tree_t *tree)
{

	if (tree == NULL)
	{
		return;
	}
	while (tree != NULL)
	{
	free(right);
	free(left);
	free(parent);
	}
	free(tree);
}
