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
  void solve(TreeNode *root,int k,unordered_map<long,int>m,long sum,int &res)
  {
    if(root)
    {if(sum+root->val==k)
      res++;
     res+=m[sum+root->val-k];
     m[sum+root->val]++;
     solve(root->left,k,m,sum+root->val,res);
     solve(root->right,k,m,sum+root->val,res);
     m[sum+root->val]--;
     
       

    }
  }
    int pathSum(TreeNode* root, int k) {
       unordered_map<long,int>m;
      int res=0;
      solve(root,k,m,0,res);
      return res;
    }
};