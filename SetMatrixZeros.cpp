void Solution::setZeroes(vector<vector<int>> &A)
{
    vector<int> r(A.size(), 1);
    vector<int> c(A[0].size(), 1);

    for (int i = 0; i < A.size(); i++)
    {
        for (int j = 0; j < A[i].size(); j++)
        {
            if (A[i][j] == 0)
            {
                r[i] = 0;
                c[j] = 0;
            }
        }
    }
    for (int i = 0; i < A.size(); i++)
    {
        for (int j = 0; j < A[i].size(); j++)
        {
            if (r[i] == 0)
            {
                A[i][j] = 0;
            }
            if (c[j] == 0)
            {
                A[i][j] = 0;
            }
        }
    }
}
