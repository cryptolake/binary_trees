#include "binary_trees.h"

/**
 * binary_tree_postorder - traverse binary using postorder
 * @tree: root of tree
 * @func: function to apply on nodes
 *
 **/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL)
		return;
	if (tree)
	{

		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
