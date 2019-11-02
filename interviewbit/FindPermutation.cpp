/**
 * @input A : Read only ( DON'T MODIFY ) String termination by '\0'
 * @input B : Integer
 * 
 * @Output Integer array. You need to malloc memory, and fill the length in len1
 */
int *findPerm(const char *A, int B, int *len1)
{
    int *arr = (int *)malloc(sizeof(int) * B);
    *len1 = B;

    int i;
    int j = B;
    i = 1;
    int m = 0;

    while (m < B - 1)
    {
        if (A[m] == 'I')
        {
            arr[m] = i;
            i++;
            m++;
        }
        else
        {
            arr[m] = j;
            j--;
            m++;
        }
    }
    arr[m] = i;
    return arr;
}
