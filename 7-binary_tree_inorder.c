#include "binary_trees.h"

/**
* binary_tree_inorder - outputs the values of tree using in-order
*
* @tree: A pointer to tree
*
* @func: A pointer to function
*
* Return: void
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}
	else
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
