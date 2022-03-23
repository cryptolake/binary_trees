#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if node is a leaf
 * @node: node to check
 * Return: 0 (node is not a leaf) 1 (node is a leaf)
 **/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->left && !node->right && node->parent)
		return (1);
	else
		return (0);
}
