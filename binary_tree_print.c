#include <stdio.h>
#include "binary_trees.h"

/**
 * print_t - prints abinary tree
 * @tree: pointer to the root node of the tree to print
 * @depth: depth of the current node in the binary tree
 * @direction: 0 if root, -1 if left, 1 if right
 */
void print_t(const binary_tree_t *tree, int depth, int direction)
{
	if (tree == NULL)
		return;

	print_t(tree->right, depth + 1, 1);
	printf("%*s", 5 * depth, "");
	if (direction == 0)
		printf("(Root)%d\n", tree->n);
	else if (direction == -1)
		printf("(L)%d\n", tree->n);
	else
		printf("(R)%d\n", tree->n);
	print_t(tree->left, depth + 1, -1);
}

/**
 * binary_tree_print - prints a binary tree
 * @tree: pointer to the root node of the tree to print
 */
void binary_tree_print(const binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	print_t(tree, 0, 0);
}
