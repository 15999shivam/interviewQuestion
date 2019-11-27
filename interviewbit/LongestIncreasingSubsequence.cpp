int Solution::lis(const vector<int> &A)
{
    int *arr = new int[A.size()];
    int n = A.size();
    arr[0] = 1;
    for (int i = 1; i < n; i++)
    {
        arr[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if (A[j] >= A[i])
            {
                continue;
            }
            int pa = arr[j] + 1;
            if (arr[i] < pa)
            {
                arr[i] = pa;
            }
        }
    }
    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        if (ans < arr[i])
            ans = arr[i];
    }
    return ans;
}
