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
  unordered_map<int,int>m;
  void solve(TreeNode*root, int& res,int &ans)
  {
   if (!root)
            return;
        
        m[root->val]++;
        
       
        if (!root->left && !root->right) {
            int odd = 0;
            for (auto a : m)
                if (a.second % 2 == 1)
                    odd++;

            if (odd <= 1)
                res++;
        }
        
        solve(root->left,res,ans);
        solve(root->right,res,ans);
        m[root->val]--;
  }
    int pseudoPalindromicPaths (TreeNode* root) {
       
      int res=0;
      if(!root)
        return 0;
    int ans=0;
      solve(root,res,ans);
      return res;
    }
};