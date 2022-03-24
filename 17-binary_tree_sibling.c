#include "binary_trees.h"

/**
 * binary_tree_sibling - find sibling of node
 * @node: node of tree
 * Return: sibling
 **/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent = node->parent;

	if (!node || !parent)
		return (NULL);

	if (parent->left != node)
		return (parent->left);

	return (parent->right);
}
