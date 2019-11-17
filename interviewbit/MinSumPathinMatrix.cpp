int Solution::minPathSum(vector<vector<int>> &A)
{
    vector<vector<int>> res = A;
    for (int i = 0; i < A.size(); i++)
    {
        for (int j = 0; j < A[0].size(); j++)
        {
            res[i][j] = -1;
        }
    }
    int m = res.size(), n = res[0].size();
    res[m - 1][n - 1] = A[m - 1][n - 1];
    // cout<<m<<" "<<n<<endl;
    // last row
    for (int i = n - 2; i >= 0; i--)
    {
        res[m - 1][i] = A[m - 1][i] + res[m - 1][i + 1];
    }

    //last Column
    for (int i = m - 2; i >= 0; i--)
    {
        res[i][n - 1] = A[i][n - 1] + res[i + 1][n - 1];
    }

    for (int i = m - 2; i >= 0; i--)
    {
        for (int j = n - 2; j >= 0; j--)
        {
            res[i][j] = A[i][j] + min(res[i + 1][j], res[i][j + 1]);
            // cout<<res[i][j]<<" ";
        }
        // cout<<endl;
    }
    return res[0][0];
}
