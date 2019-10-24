vector<int> Solution::wave(vector<int> &A)
{
    sort(A.begin(), A.end());
    for (int i = 0; i + 1 < A.size(); i += 2)
    {
        int temp = A[i];
        A[i] = A[i + 1];
        A[i + 1] = temp;
    }
    return A;
}
