int Solution::solve(string A)
{
    int size = A.size();
    int count = 0;
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] == 'A' || A[i] == 'E' || A[i] == 'I' || A[i] == 'U' || A[i] == 'a' || A[i] == 'e' || A[i] == 'i' || A[i] == 'o' || A[i] == 'u' || A[i] == 'O')
        {
            count += size - i;
            count %= 10003;
        }
    }
    return count;
}
