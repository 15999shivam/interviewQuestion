int Solution::findMinXor(vector<int> &A)
{
    sort(A.begin(), A.end());
    int i;
    int min = 9999;
    for (i = 0; i < A.size() - 1; i++)
    {
        int x = A[i] ^ A[i + 1];
        // printf("XOR = %d\n",x);
        if (x < min)
        {
            min = x;
        }
    }
    return min;
}
