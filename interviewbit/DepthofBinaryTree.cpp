/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::maxDepth(TreeNode* A) {
    if(A == NULL)
    {
        return 0;
    }
    else{
        int a = maxDepth(A->left);
        int b = maxDepth(A->right);
        int c = a>b?a:b;
        return c+1;
    }
}
