#include "binary_trees.h"

/**
 * binary_tree_sibling - checks if a node is a sibling
 *
 * @node: pointer to node to check
 *
 * Return: returns a pointer to sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
	{
		return (NULL);
	}
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
