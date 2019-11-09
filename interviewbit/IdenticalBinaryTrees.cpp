/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::isSameTree(TreeNode* A, TreeNode* B) {
    if(A == NULL && B==NULL)
        return 1;
    else
    if(A==NULL && B!=NULL)
        return 0;
    else
    if(A !=NULL && B==NULL)
        return 0;
    else
        {
            int a = isSameTree(A->left,B->left);
            int b = isSameTree(B->right,B->right);
            return (a==1 && b==1)?1:0;
        }
}
