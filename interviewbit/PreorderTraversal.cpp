/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::preorderTraversal(TreeNode *A)
{
    vector<int> v;
    if (A == NULL)
        return v;
    stack<TreeNode *> s;
    s.push(A);
    while (!s.empty())
    {
        TreeNode *temp = s.top();
        if (temp != NULL)
        {
            v.push_back(temp->val);
            s.pop();
            if (temp->right != NULL)
                s.push(temp->right);
            if (temp->left != NULL)
                s.push(temp->left);
        }
    }
    return v;
}
