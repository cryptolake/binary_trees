#include "binary_trees.h"

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree)
	{
		return(binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
	}

	else
	{
		return (0);
	}
}
