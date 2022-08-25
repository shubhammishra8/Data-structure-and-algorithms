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
   int solve(TreeNode *node)
  {if(!node)
    return 0 ;
    int l=solve(node->left)+1;
   int r=solve(node->right)+1;
   return max(l,r);
    

  }
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
     if(!root)
       return NULL;
     int rig=solve(root->right);
      int lef=solve(root->left);
      if(lef==rig)
        return root;
      if(rig>lef)
       return lcaDeepestLeaves(root->right);
      else
        return lcaDeepestLeaves(root->left);
        
    }
};