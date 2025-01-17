#include "tree-node.h"

TreeNode *invertTree(TreeNode *root) {
  if (!root)
    return root;
  if (!root->left && !root->right)
    return root;
  auto left = root->left;
  auto right = root->right;
  root->left = nullptr;
  root->right = nullptr;
  root->left = invertTree(right);
  root->right = invertTree(left);
  return root;
}
