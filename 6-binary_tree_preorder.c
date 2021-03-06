#include "binary_trees.h"

/**
 * binary_tree_preorder - traverse binary using preorder
 * @tree: root of tree
 * @func: function to apply on nodes
 *
 **/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL)
		return;
	if (tree)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
