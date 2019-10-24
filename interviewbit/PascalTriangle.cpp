vector<vector<int>> Solution::solve(int A)
{

    vector<vector<int>> v;
    if (A == 0)
    {
        return v;
    }
    vector<int> temp1;
    temp1.push_back(1);
    vector<int> temp2;
    temp2.push_back(1);
    temp2.push_back(1);
    v.push_back(temp1);
    if (A == 1)
    {
        return v;
    }
    v.push_back(temp2);

    for (int i = 1; i < A - 1; i++)
    {
        vector<int> temp;
        temp.push_back(1);
        for (int j = 0; j < v[i].size() - 1; j++)
        {
            temp.push_back(v[i][j] + v[i][j + 1]);
        }
        temp.push_back(1);
        v.push_back(temp);
    }
    return v;
}
