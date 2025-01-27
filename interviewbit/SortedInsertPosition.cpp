int Solution::searchInsert(vector<int> &A, int B)
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int l = 0, h = A.size() - 1;
    int idx = l;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (A[mid] == B)
        {
            return mid;
        }
        else if (A[mid] > B)
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
            idx = mid + 1;
        }
    }
    return idx;
}
