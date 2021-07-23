#include "binary_trees.h"
/**
 * binary_tree_balance - Function that measures the
 * balance factor of a binary tree.
 * @tree: Pointer to the root node of the
 * tree to measure the balance factor.
 * Return: If tree is NULL, return 0.
 **/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left += 1 + binary_tree_height(tree->left);
	if (tree->right)
		right += 1 + binary_tree_height(tree->right);
	return (left - right);
}

/**
 * binary_tree_height - Function that measures
 * height of given binary tree.
 * @tree: pointer to the root node of the
 * tree to measure the balance factor.
 * Return: Height of given tree.
 **/
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
