/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::hasPathSum(TreeNode *A, int B)
{

    if (A == NULL)
    {
        return 0;
    }
    else
    {
        int diff = B - A->val;
        if (diff == 0)
        {
            if (A->left == NULL && A->right == NULL)
                return 1;
            else
            {
                return 0;
            }
        }
        if (diff < 0)
            return 0;
        return hasPathSum(A->left, diff) || hasPathSum(A->right, diff);
    }
}
