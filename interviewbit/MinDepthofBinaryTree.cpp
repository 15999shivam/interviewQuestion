/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::minDepth(TreeNode* root) {
    if (root == NULL) 
        return 0; 
  else
    
    if (root->left == NULL && root->right == NULL) 
    return 1; 
  else
    
    if (!root->left) 
    return minDepth(root->right) + 1; 
  else
   
    if (!root->right) 
    return minDepth(root->left) + 1; 
  else
    return min(minDepth(root->left), minDepth(root->right)) + 1; 
}
