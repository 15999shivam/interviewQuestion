int Solution::minDistance(string A, string B)
{
    int m = A.size();
    int n = B.size();
    int **arr = new int *[m + 1];
    for (int i = 0; i < m + 1; i++)
    {
        arr[i] = new int[n + 1];
    }
    //row
    for (int i = 0; i < n + 1; i++)
    {
        arr[0][i] = i;
    }
    //column
    for (int j = 0; j < m + 1; j++)
    {
        arr[j][0] = j;
    }
    for (int i = 1; i < m + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            if (A[m - i] == B[n - j])
            {
                arr[i][j] = arr[i - 1][j - 1];
            }
            else
            {
                arr[i][j] = min(arr[i - 1][j], min(arr[i - 1][j - 1], arr[i][j - 1])) + 1;
            }
        }
    }
    return arr[m][n];
}
