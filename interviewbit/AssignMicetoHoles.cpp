int Solution::mice(vector<int> &A, vector<int> &B)
{
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    int n = A.size();
    int ans = abs(A[0] - B[0]);
    for (int i = 1; i < n; i++)
    {
        ans = max(ans, abs(A[i] - B[i]));
    }
    return ans;
}
