int Solution::maxp3(vector<int> &A)
{
    int n = A.size();
    sort(A.begin(), A.end());
    int ans = max(A[0] * A[1] * A[n - 1], A[n - 3] * A[n - 2] * A[n - 1]);
    return ans;
}