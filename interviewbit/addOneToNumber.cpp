vector<int> Solution::plusOne(vector<int> &A)
{
    vector<int> v;
    for (int i = 0; i < A.size(); i++)
    {
        v.push_back(A[i]);
    }
    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (v[i] > 8)
        {
            v[i] = 0;
            if (i == 0)
            {
                v.insert(v.begin(), 1);
            }
        }
        else
        {
            v[i] += 1;
            break;
        }
    }
    while (v[0] == 0)
    {
        v.erase(v.begin());
    }
    return v;
}
