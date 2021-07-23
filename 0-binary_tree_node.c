#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - Function that creates a binary tree node
 * @parent: Pointer to parent node.
 * @value: Value stored in the new node.
 *
 * Return: Pointer to the new node (leaf) or NULL on failure.
 **/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	node->parent = parent;
	node->right = NULL;
	node->left = NULL;
	node->n = value;

	return (node);
}
