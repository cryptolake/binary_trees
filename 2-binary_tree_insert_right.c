#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert node to right
 * @parent: parent node
 * @value: value of node
 * Return: new node
 *
**/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);
	
	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;

	if (parent->right != NULL)
	{
		node->right = parent->right;
		parent->right->parent = node;
	}


	parent->right = node;

	return (node);
}
