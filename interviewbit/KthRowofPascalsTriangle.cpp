vector<int> Solution::getRow(int A)
{
    if (A == 0)
    {
        vector<int> v;
        v.push_back(1);
        return v;
    }

    vector<int> temp2;
    temp2.push_back(1);
    temp2.push_back(1);

    for (int i = 1; i < A; i++)
    {
        vector<int> temp;
        temp.push_back(1);
        for (int j = 0; j < temp2.size() - 1; j++)
        {
            temp.push_back(temp2[j] + temp2[j + 1]);
        }
        temp.push_back(1);
        temp2 = temp;
        temp.clear();
    }

    return temp2;
}
