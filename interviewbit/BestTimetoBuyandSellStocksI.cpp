int Solution::maxProfit(const vector<int> &A)
{
    if (A.size() == 0 || A.size() == 1)
    {
        return 0;
    }

    int sol = 0, min_p = A[0];

    for (int i = 1; i < A.size(); i++)
    {
        if (A[i] < min_p)
        {
            min_p = A[i];
        }
        sol = max(sol, A[i] - min_p);
    }

    return sol;
}
