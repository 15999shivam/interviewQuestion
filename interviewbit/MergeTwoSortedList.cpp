void Solution::merge(vector<int> &A, vector<int> &B)
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int i = 0;
    int j = 0;
    while (i < A.size() && j < B.size())
    {
        if (A[i] < B[j])
        {
            i++;
        }
        else
        {
            A.insert(A.begin() + i, B[j++]);
            // i--;
        }
    }
    while (j < B.size())
    {
        A.push_back(B[j++]);
    }
}
