#include "tree-node.h"
#include <vector>
using std::vector;

int kthSmallest(TreeNode *root, int k) {
  vector<int> res;
  inorder(res, root);
  return res[k - 1];
}

void inorder(vector<int> &res, TreeNode *root) {
  if (root) {
    inorder(res, root->left);
    res.push_back(root->val);
    inorder(res, root->right);
  }
}
