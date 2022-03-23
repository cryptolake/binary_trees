#include "binary_trees.h"

/**
 * binary_tree_nodes - get number of nodes
 * (nodes with at least a child)
 * @tree: root of tree
 * Return: number of nodes
 **/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree)
	{

		if (tree->left || tree->right)
			return (binary_tree_nodes(tree->right)
					+ binary_tree_nodes(tree->left) + 1);
		return (binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left));
	return (0);

	}
	return (0);
}
