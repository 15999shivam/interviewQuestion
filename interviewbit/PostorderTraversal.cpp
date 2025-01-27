/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::postorderTraversal(TreeNode* A) {
     vector<int> res;
    if(A ==NULL)return res;
    stack<TreeNode*>s1;
    stack<TreeNode*>s2;
    s1.push(A);
    while(!s1.empty())
    {
        TreeNode*temp = s1.top();
        s1.pop();
        s2.push(temp);
        if(temp->left!=NULL){
            s1.push(temp->left);
        }
        if(temp->right!=NULL){
            s1.push(temp->right);
        }
        
    }
   
    while(!s2.empty())
    {
        TreeNode* temp = s2.top();
        s2.pop();
        res.push_back(temp->val);
    }
    return res;
}
