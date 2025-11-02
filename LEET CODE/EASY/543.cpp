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
    int maxdia=0;
    int level(TreeNode* root){
       if(root==NULL) return 0;
       return 1+ max(level(root->left),level(root->right));
    }
    int diameterOfBinaryTree(TreeNode* root) {
      if(root==NULL) return 0;  
      int dia=level(root->right)+level(root->left);
      maxdia=max(maxdia,dia);
      diameterOfBinaryTree(root->right);
      diameterOfBinaryTree(root->left);
      return maxdia;
    }
};
