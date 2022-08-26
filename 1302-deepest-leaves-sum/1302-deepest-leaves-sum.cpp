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
  int de(TreeNode*root)
  {
    if(!root)
      return 0;
    int d=1+max(de(root->left),de(root->right));
    return d;
  }
 int solve(TreeNode*root,int d,int curr)
  
  {
    if(!root)
      return 0;
  if(curr==d-1)return root->val;
    return (solve(root->left,d,curr+1)+solve(root->right,d,curr+1));
    
      
  }
    int deepestLeavesSum(TreeNode* root) {
       if(!root)
         return 0;
      
      int deapth=de(root);
     return  solve(root,deapth,0);
     
      
    }
};