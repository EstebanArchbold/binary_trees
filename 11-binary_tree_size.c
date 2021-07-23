#include "binary_trees.h"
/**
 *binary_tree_size - Measures the size of a binary tree
 *@tree: a pointer to the root node of the tree to measure the size
 *
 *Return: size of tree or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sz = 0;

	if (!tree)
		return (sz);
	if (!tree->right && !tree->left)
	{
		sz++;
		return (sz);
	}
	if (tree->left)
		sz += binary_tree_size(tree->left);
	if (tree->right)
		sz += binary_tree_size(tree->right);

	return (sz + 1);
}
