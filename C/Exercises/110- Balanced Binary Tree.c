/*
    Given a binary tree, determine if it is height-balanced.
*/

#include <stdbool.h>

// Definition for a binary tree node.
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

bool isBalanced(struct TreeNode* root) {
    if(!root) return 1;
    while()

    return isBalanced(root->left) && isBalanced(root->right);
} 