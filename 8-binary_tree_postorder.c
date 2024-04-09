#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *binary_tree_postorder - postorder traversal
 *@tree: ptr to the root of node
 *@func: ptr to function that calls node
 *
 *
 *Return: if tree or function is null, nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
