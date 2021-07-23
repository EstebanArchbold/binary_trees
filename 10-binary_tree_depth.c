#include "binary_trees.h"
/**
 *binary_tree_depth - Measures the depth of a node in a binary tree
 *@tree:a pointer to the node to measure the depth
 *
 *Return: the depth of node or 0 id tree NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t s = 0;

	if (!tree || !tree->parent)
		return (s);

	s = binary_tree_depth(tree->parent) + 1;

	return (s);
}
