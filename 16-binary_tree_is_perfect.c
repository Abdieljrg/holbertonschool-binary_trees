#include "binary_trees.h"

/**
 *binary_tree_height - Measures the height of binary tree
 *@tree: A pointer to the root node of tree
 *
 *
 *
 *
 *Return: The height of the tree or 0 is tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 *binary_tree_is_perfect - Checks if binary tree is perfect
 *@tree: A pointer to the root node of tree
 *
 *
 *Return: 1 if the tree is perfect or 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);


	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height == right_height)
	{
		if (tree->left == NULL && tree->right == NULL)
			return (1);

		if (binary_tree_is_perfect(tree->left)
		&& binary_tree_is_perfect(tree->right))
			return (1);

	}
	return (0);
}
