#include "binary_trees.h"

/**
* binary_tree_node - The function to create a node
*
* @parent: The parent node
*
* @value: The integer value for node
*
* Return: pointer to the new node
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node_to_create;

	node_to_create = malloc(sizeof(binary_tree_t));
	if (node_to_create == NULL)
	{
		return (NULL);
	}
	node_to_create->n = value;
	node_to_create->parent = parent;
	node_to_create->left = NULL;
	node_to_create->right = NULL;
	return (node_to_create);
}
