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
  int solve(TreeNode*root,int mx)
  {int res=0;
   if(!root) return 0;
   if(mx<=root->val)
   {
     mx=root->val;
     res++;
   }
   return res+solve(root->left,mx)+solve(root->right,mx);

  }
    
    int goodNodes(TreeNode* root) {
        if(root==NULL)
          return 0;
      return  solve(root,root->val);
    }
};