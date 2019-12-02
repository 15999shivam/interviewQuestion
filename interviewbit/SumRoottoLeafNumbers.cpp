/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 void  sumNumbers_helper(TreeNode* A,int num,vector<int>&v)
 {
     if(A ==NULL)
        return;
        else
        if(A->left == NULL && A->right == NULL){
            num=(num*10+A->val)%1003;
            v.push_back(num);
        }
    else{
        num=(num*10+A->val)%1003;
        sumNumbers_helper(A->left,num,v);
        sumNumbers_helper(A->right,num,v);
    }
 }
int Solution::sumNumbers(TreeNode* A) {
    vector<int>v;
    int sum = 0;
    sumNumbers_helper(A,0,v);
    for(int i=0;i<v.size();i++){
        // cout<<v[i]<<" ";
        sum+=v[i];
        sum%=1003;
    }
    // cout<<endl;
    return sum;
}
