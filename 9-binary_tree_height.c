#include "binary_trees.h"
/**
 *binary_tree_height - Measures the height of a binary tree
 *@tree: a pointer to the root node of the tree to measure the height.
 *Return: nbr of level
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0, height_right = 0;

	if (!tree || (!tree->left && !tree->right))
	{
		return (0);
	}

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	if (height_left < height_right)
	{
		return (height_right + 1);
	}
	return (height_left + 1);
}
