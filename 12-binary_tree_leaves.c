#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_leaves - count leaves of tree
 * @tree: root node
 * Return: number of nodes
 **/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree)
	{

		if (!tree->left && !tree->right)
			return (binary_tree_leaves(tree->right)
					+ binary_tree_leaves(tree->left) + 1);
		return (binary_tree_leaves(tree->right) + binary_tree_leaves(tree->left));
	return (0);

	}
	return (0);
}
