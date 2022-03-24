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

/**
 * is_perfect - check if tree is perfect
 * @node: root node
 * @h: height of tree
 * @level: current level in tree
 * Return: (1) perfect, (0) not perfect
 **/
int is_perfect(const binary_tree_t *node, size_t h, size_t level)
{
	if (!node->right && !node->left)
		return (h == level);

	if (!node->right || !node->left)
		return (0);

	return (is_perfect(node->left, h, level + 1) &&
			is_perfect(node->right, h, level + 1));
}

/**
 * binary_tree_is_perfect - wrapper function of is_perfect function
 * @tree: root node
 * Return: (1) perfect, (0) not perfect
 **/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = binary_tree_height(tree);

	if (!tree)
		return (0);
	return (is_perfect(tree, height, 0));
}
