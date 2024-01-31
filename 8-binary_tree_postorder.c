#include "binary_trees.h"

/**
* binary_tree_postorder - It outputs the values of tree using post-order
* 
* @tree: A pointer to tree
* 
* @func: A pointer to function
* 
* Return: void
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}
	else
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
