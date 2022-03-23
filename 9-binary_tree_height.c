#include "binary_trees.h"

/**
 * binary_tree_height - binary tree height
 * @tree: node to get height from
 * Return: height
 **/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t ld = 0, rd = 0;

	if (!tree || (!tree->right && !tree->left))
		return (0);
	ld = binary_tree_height(tree->left);
	rd = binary_tree_height(tree->right);

	if (ld >= rd)
		return (ld + 1);

	return (rd + 1);
}
