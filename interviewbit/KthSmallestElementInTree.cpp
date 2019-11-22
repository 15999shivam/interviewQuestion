/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::kthsmallest(TreeNode *A, int B)
{
    if (A == NULL)
        return 0;
    int count = 0;
    TreeNode *temp = A;
    stack<TreeNode *> s;
    // while(!(s.empty()&& temp==NULL))
    // {
    //     if(temp!=NULL){
    //         s.push(temp);
    //         temp = temp->left;
    //     }
    //     temp = s.top();
    //     count++;
    //     cout<<"temp->val: "<<temp->val<<endl;
    //     if(count == B)
    //     {
    //         return temp->val;
    //     }
    //     temp = temp->right;
    //     s.pop();
    // }
    while (!(s.empty() && temp == NULL))
    {

        while (temp != NULL)
        {
            s.push(temp);
            temp = temp->left;
        }
        temp = s.top();
        count++;
        if (count == B)
        {
            // cout<<"max = "<<temp->val<<endl;
            return temp->val;
        }
        //  cout<<"temp->val: "<<temp->val<<endl;
        temp = temp->right;
        s.pop();
    }
    return 0;
}
