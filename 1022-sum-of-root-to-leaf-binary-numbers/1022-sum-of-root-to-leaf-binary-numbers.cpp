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
public:int ans=0;
  int convert_decimal(vector<int> x)
    {
        int n=0;
        for(int i=0;i<x.size();i++)
            n=n*2+x[i];
        return n;
    }
  void solve(TreeNode*root,vector<int>r)
  {
    if(!root)
      return;
    r.push_back(root->val);
    
    if(!root->left&&!root->right)
    {
      ans+=convert_decimal(r);
    }
    solve(root->left,r);
    solve(root->right,r);
  }
    int sumRootToLeaf(TreeNode* root) {
        if(!root)return 0;
        vector<int> t;
        solve(root,t);
        return ans;
    }
};