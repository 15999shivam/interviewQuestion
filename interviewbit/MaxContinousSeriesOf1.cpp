/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer
 * 
 * @Output Integer array. You need to malloc memory, and fill the length in len1
 */
int *maxone(int *A, int n1, int B, int *len1)
{
    int stored;
    int i;
    int sum = 0;
    int limit = B;
    int max = 0;
    int endIndex;
    for (i = 0; i < n1; i++)
    {
        if (A[i] == 0 && limit == B)
        {
            stored = i + 1;
        }
        if (A[i] == 0)
        {
            limit--;
        }
        if (limit == -1)
        {
            if (max < sum)
            {
                max = sum;
                endIndex = i;
            }
            sum = 0;
            i = stored - 1;
            limit = B;
        }
        else
        {
            sum += 1;
        }
    }
    if (max < sum)
    {
        max = sum;
        endIndex = i;
    }
    endIndex -= 1;
    int *arr = (int *)malloc(sizeof(int) * max);
    for (i = max - 1; i >= 0; i--)
    {
        arr[i] = endIndex--;
    }
    *len1 = max;
    return arr;
}
