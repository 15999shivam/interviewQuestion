vector<vector<int>> Solution::prettyPrint(int A)
{
    vector<vector<int>> res(A + A - 1);
    int copy = A;
    int count = 0;
    int size = A + A - 1;
    for (int i = 0; i < size; i++)
    {
        res[i] = vector<int>(size);
    }

    while (count != A)
    {
        for (int i = count; i < size - count; i++)
        {
            res[i][count] = copy;
            res[count][i] = copy;
            res[size - count - 1][i] = copy;
            res[i][size - count - 1] = copy;
        }
        copy--;
        count++;
    }
    return res;
}
