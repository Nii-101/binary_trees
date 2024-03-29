#include "binary_trees.h"
/**
 * do_perfect_tree_check - It does an actual perfect tree check
 *
 * @tree: A pointer to tree to check
 *
 * Return: int 0 or 1
 */
int do_perfect_tree_check(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (tree->left && tree->right)
	{
		l = 1 + do_perfect_tree_check(tree->left);
		r = 1 + do_perfect_tree_check(tree->right);
		if (r == l && r != 0 && l != 0)
			return (r);
		return (0);
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * binary_tree_is_perfect - checks if a tree is perfect
 *
 * @tree: A pointer to tree to check
 *
 * Return: Returns int 1 or 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int tree_check = 0;

	if (!tree)
	{
		return (0);
	}
	else
	{
		tree_check = do_perfect_tree_check(tree);
		if (tree_check != 0)
		{
			return (1);
		}
		return (0);
	}
}
