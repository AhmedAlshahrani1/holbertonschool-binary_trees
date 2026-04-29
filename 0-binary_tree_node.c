#include "binary_trees.h"
/**
 *binary_tree_node - it is a function that creat a new node
 *@parent : is a pointer to the parent node
 *@value : value is the value to put in the new node
 *Return : return a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *newNode;
newNode = malloc(sizeof(parent));
if (newNode == NULL)
{
return (NULL);
}
newNode->parent = parent;
newNode->n = value;
newNode->left = NULL;
newNode->right = NULL;
return (newNode);
}

