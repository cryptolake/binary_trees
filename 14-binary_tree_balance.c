#include "binary_trees.h"

/**
 * binary_tree_height - binary tree height
 * @tree: node to get height from
 * Return: height
 **/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t ld = 0, rd = 0;

	if (!tree)
		return (0);
	ld = binary_tree_height(tree->left);
	rd = binary_tree_height(tree->right);

	if (ld >= rd)
		return (ld + 1);

	return (rd + 1);
}

/**
 * binary_tree_balance - get balance factor of tree
 * @tree: root of tree
 * Return: balance factor
 **/
int binary_tree_balance(const binary_tree_t *tree)
{
	int lh, rh;

	if (!tree)
		return (0);

	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);

	return (lh - rh);
}
