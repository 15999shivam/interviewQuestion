int Solution::uniquePathsWithObstacles(vector<vector<int> > &A) {
    vector<vector<int>> res = A;
    for(int i=0;i<A.size();i++)
    {
        for(int j = 0;j<A[0].size();j++)
        {
            res[i][j] = 0;
        }
    }
    int m = res.size(), n  = res[0].size();
    // res[m-1][n-1] = A[m-1][n-1];
    // cout<<m<<" "<<n<<endl;
    // last row
    res[0][0] = A[0][0]==1?0:1;
    for(int i = 1;i<m;i++)
    {
        if(A[i][0] == 1)continue;
        res[i][0] = res[i-1][0];
    }
    
    //last Column
    for(int i = 1;i<n;i++)
    {
         if(A[0][i] == 1)continue;
        res[0][i] = res[0][i-1];
    }
    
    for(int i=1;i<m;i++)
    {
        for(int j=1;j<n;j++){
            if(A[i][j] == 1)continue;
            res[i][j] = res[i-1][j]+res[i][j-1];
            // cout<<res[i][j]<<" ";
        }
        // cout<<endl;
    }
    // for(int i = 0;i<m;i++)
    // {
    //     for(int j = 0;j<n;j++){
    //         cout<<res[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    return res[m-1][n-1];
}