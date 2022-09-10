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
  bool isleaf(TreeNode*node)
  {
    if(node->right==NULL&&node->left==NULL)
       return true;
    
    return false;
  }
    int minDepth(TreeNode* root) {
       if(!root)
         return 0;
      queue<TreeNode*>q;
      q.push(root);
      int count=0;
      while(!q.empty())
      {
        int n=q.size();
        count++;
        for(int i=0;i<n;i++)
        {
          auto node=q.front();
        q.pop();
          
          if(node->left)
            q.push(node->left);
          if(node->right)
            q.push(node->right);
          if(isleaf(node))
            return count;
          
        }
        
          
      }
      return count;
    }
};