#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *binary_tree_leaves - count leaves in tree
 *@tree: tree
 *
 *Return: number of leaves in binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
