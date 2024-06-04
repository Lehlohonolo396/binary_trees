#include "binary_trees.h"

/**
 * binary_tree_insert_right - add node to the right of the parent
 * if exists move down one level and add the new node first
 * @parent: parent to the specified node
 * @value: Node value
 * Return: NULL if fails or new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;
	return (new_node);
}
