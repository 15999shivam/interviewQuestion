/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int>> Solution::zigzagLevelOrder(TreeNode *A)
{
    vector<vector<int>> res;
    vector<int> temp;
    stack<TreeNode *> s1, s2;
    s1.push(A);
    while (!s1.empty())
    {
        while (!s1.empty())
        {
            TreeNode *current = s1.top();
            s1.pop();
            if (current->left)
                s2.push(current->left);
            if (current->right)
                s2.push(current->right);
            temp.push_back(current->val);
            // cout<<"s1: "<<current->val<<endl;
        }
        if (!temp.empty())
        {
            res.push_back(temp);
        }
        temp.clear();
        while (!s2.empty())
        {
            TreeNode *current = s2.top();
            s2.pop();
            if (current->right)
                s1.push(current->right);
            if (current->left)
                s1.push(current->left);
            temp.push_back(current->val);
            // cout<<"s2: "<<current->val<<endl;
        }
        if (!temp.empty())
        {
            res.push_back(temp);
        }
        temp.clear();
    }
    return res;
    // queue<TreeNode*> q;
    // q.push(A);
    // q.push(NULL);
    // //int level = 1;
    // vector< vector<int> > nodes;
    // vector<int> temp;
    // while(!q.empty()) {
    //     A = q.front();
    //     q.pop();

    //     if(A)
    //         temp.push_back(A->val);

    //     if(A==NULL) {
    //         //level *= -1;
    //         nodes.push_back(temp);
    //         temp.clear();
    //         if(!q.empty())
    //             q.push(NULL);
    //     }
    //     else {
    //         if(A->left)
    //             q.push(A->left);
    //         if(A->right)
    //             q.push(A->right);
    //     }
    // }
    // for(int i=1;i<nodes.size();i+=2)
    //     reverse(nodes[i].begin(), nodes[i].end());

    // return nodes;
}
