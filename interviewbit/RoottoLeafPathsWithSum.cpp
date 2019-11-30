/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void pathSumHelper(TreeNode *A, int B, vector<int> current, vector<vector<int>> &res)
{
    if (!A)
    {
        return;
    }
    else
    {
        current.push_back(A->val);
        if (A->left == NULL && A->right == NULL)
        {
            //res.push_back(current);
            // cout<<A->val<<" "<<B<<endl;
            if (A->val == B)
            {
                res.push_back(current);
            }
        }
        else
        {
            // if(A->right!=NULL)
            pathSumHelper(A->right, B - A->val, current, res);
            //if(A->left!=NULL)
            pathSumHelper(A->left, B - A->val, current, res);
        }
    }
}
vector<vector<int>> Solution::pathSum(TreeNode *A, int B)
{
    vector<vector<int>> res;
    if (A == NULL)
        return res;
    vector<int> current;
    pathSumHelper(A, B, current, res);
    // for(int i=0;i<res.size();i++)
    // {
    //     for(int j=0;j<res[i].size();j++)
    //     {
    //         cout<<res[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    return res;
}
