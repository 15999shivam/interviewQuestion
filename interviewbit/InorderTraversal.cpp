/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::inorderTraversal(TreeNode* A) {
    vector<int>v;
    TreeNode *temp = A;
    stack<TreeNode*>s;
    // s.push(A);
    while(!(s.empty()&&temp==NULL)){
        
        while(temp!=NULL){
            s.push(temp);
            temp= temp->left;
        }
        temp = s.top();
        v.push_back(temp->val);
        temp = temp->right;
        s.pop();
        
    }
    return v;
}
