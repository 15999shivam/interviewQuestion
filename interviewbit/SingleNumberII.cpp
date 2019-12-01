int Solution::singleNumber(const vector<int> &A)
{
    int count = 0;
    int res = 0;
    for (int i = 0; i < 32; i++)
    {
        count = 0;
        for (int j = 0; j < A.size(); j++)
        {
            if ((A[j] & (1 << i)) != 0)
                count++;
        }
        res = res | ((count % 3) << i);
    }
    return res;
}
