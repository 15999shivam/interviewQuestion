int Solution::lengthOfLastWord(const string A)
{
    bool isLast = false;
    int size = A.size();
    if (size == 0)
        return 0;
    int count = 0;
    while (A[size - 1] == ' ')
    {
        size--;
    }
    while (A[size - 1] != ' ' && (size - 1 >= 0))
    {
        count++;
        size--;
    }
    return count;
}
