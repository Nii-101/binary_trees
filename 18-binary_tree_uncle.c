#include "binary_trees.h"

/**
 * binary_tree_uncle - Checks if a node is sibling
 * 
 * @node: A pointer to node to check
 * 
 * Return: Returns a pointer to the the uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
	{
		return (NULL);
	}
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
