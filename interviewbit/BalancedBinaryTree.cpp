/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 int Balance_helper(TreeNode * A,bool &isBal)
 {
     if(A==NULL)
     return 0;
     else
        {
            int a = Balance_helper(A->right,isBal);
            int b = Balance_helper(A->left,isBal);
            if(abs(a-b)>1)
                isBal = false;
            return 1+(a>b?a:b);
        }
 }
int Solution::isBalanced(TreeNode* A) {
    bool isBal = true;
    Balance_helper(A,isBal);
    return isBal?1:0;
}
