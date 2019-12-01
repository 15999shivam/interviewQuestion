/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
stack<TreeNode *> s;
TreeNode *curr = NULL;
BSTIterator::BSTIterator(TreeNode *root)
{
    while (!s.empty())
    {
        s.pop();
    }
    curr = root;
    while (curr != NULL)
    {
        s.push(curr);
        curr = curr->left;
    }
}

/** @return whether we have a next smallest number */
bool BSTIterator::hasNext()
{
    return !s.empty();
}

/** @return the next smallest number */
int BSTIterator::next()
{
    if (s.empty())
    {
        return -1;
    }
    curr = s.top();
    int ans = curr->val;
    curr = curr->right;
    s.pop();
    while (curr != NULL)
    {
        s.push(curr);
        curr = curr->left;
    }
    return ans;
}

/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */
