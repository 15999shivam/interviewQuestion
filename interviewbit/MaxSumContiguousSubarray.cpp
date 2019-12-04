int Solution::maxSubArray(const vector<int> &res)
{
    if (res.size() == 0)
        return 0;
    vector<int> A = res;
    int max = A[0];
    for (int i = 1; i < A.size(); i++)
    {
        // cout<<"Before "<<A[i]<<" "<<endl;
        A[i] = (A[i] > (A[i] + A[i - 1])) ? A[i] : (A[i] + A[i - 1]);
        if (A[i] > max)
            max = A[i];
        // cout<<"After "<<A[i]<<" "<<endl;
    }
    return max;
}
