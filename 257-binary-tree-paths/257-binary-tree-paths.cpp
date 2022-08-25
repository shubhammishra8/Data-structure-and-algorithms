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
   vector<string>ans; 
  void solve(TreeNode* node,string curr)
  {if(!node)
    return ;
  
    if(!node->right&&!node->left)
    {
      curr=curr+to_string(node->val);
      ans.push_back(curr);
      return;
    }
   curr=curr+to_string(node->val)+"->";
   solve(node->left,curr);
   solve(node->right,curr);
   

  }
    vector<string> binaryTreePaths(TreeNode* root) {
      
      
      solve(root,"");
      
      return ans;
     
        
    }
};