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
  string ans="";
  void solve(TreeNode*root,string curr)
  { curr=(char)(root->val+'a')+curr;
    if(root->left==NULL&&root->right==NULL)
    {if(ans=="")ans=curr;
     else
     {
       ans=min(ans,curr);
     }
    }
   if(root->left)
    solve(root->left,curr);
   if(root->right)
    solve(root->right,curr);
    
  }
    string smallestFromLeaf(TreeNode* root) {
      if (!root)
        return ans;
       solve(root,"");
      return ans;
     
     
      
    }
};