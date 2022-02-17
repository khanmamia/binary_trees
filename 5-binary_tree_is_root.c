#include "binary_trees.h"
/**
 * binary_tree_is_root - detects if tree is root
 * @node: pointer to node
 * Return: true or false
 */

int binary_tree_is_root(const binary_tree_t *node)
{
if (node != NULL && node->parent == NULL)
	return (1);
return (0);
}
