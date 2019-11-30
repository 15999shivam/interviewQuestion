int Solution::trap(const vector<int> &A)
{
    if (A.size() < 3)
        return 0;
    vector<int> left;
    vector<int> right;
    int water = 0;
    int max = A[0];
    for (int i = 0; i < A.size(); i++)
    {
        if (max < A[i])
            max = A[i];
        left.push_back(max);
        right.push_back(max);
    }
    max = A[A.size() - 1];
    for (int j = A.size() - 1; j >= 0; j--)
    {
        if (max < A[j])
            max = A[j];
        right[j] = max;
    }
    for (int i = 0; i < A.size(); i++)
    {
        water += min(left[i], right[i]) - A[i];
    }
    return water;
}
