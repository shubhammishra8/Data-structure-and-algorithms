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
class BSTIterator {
public:
  TreeNode* node;
  TreeNode* t;
  
  void convert(TreeNode* root)
  {
        if(!root)
            return;
        
        convert(root->left);
        
        t->right=root;
        t=t->right;
        
        convert(root->right);

  }
    BSTIterator(TreeNode* root) {
       
       node=new TreeNode(0);
        t=node;
        convert(root);
    }
    
    int next() { if(node->right==NULL)
      return NULL;
      node=node->right;
      return (node->val);
        
    }
    
    bool hasNext() {
      if(node->right)
          return true;
      return false;
     
        
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */