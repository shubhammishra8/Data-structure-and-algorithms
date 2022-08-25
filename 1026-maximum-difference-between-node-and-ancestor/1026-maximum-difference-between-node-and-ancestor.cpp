/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
  int result=0;
  void solve(TreeNode*roo,int maxv,int minv)
  {
    if(!roo)
      return;
    int tempr=max(abs(roo->val-maxv),(roo->val-minv));
    
    result=max(result,tempr);
    maxv=max(maxv,roo->val);
    minv=min(minv,roo->val);
    solve(roo->left,maxv,minv);
    solve(roo->right,maxv,minv);
    return ;
  }
    int maxAncestorDiff(TreeNode* root) {
        if(!root)
          return 0;
      result=0;
      solve(root,root->val,root->val);
      return result;
    }
};