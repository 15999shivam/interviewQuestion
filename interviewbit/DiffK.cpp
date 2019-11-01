/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer
 * 
 * @Output Integer
 */
int diffPossible(int *A, int n1, int B)
{
    if (n1 == 1)
        return 0;

    int i = 0;
    int j = 1;

    while (i < j && j < n1)
    {
        // printf("%d %d %d\n",i,j,A[j] - A[i]);
        if (A[j] - A[i] == B)
            return 1;

        while (i > 0 && i < j && A[j] - A[i] < B)
            i--;
        // printf("%d %d %d\n",i,j,A[j] - A[i]);

        if (A[j] - A[i] == B)
            return 1;

        while (i >= 0 && i + 1 != j && i < j && A[j] - A[i] > B)
            i++;
        // printf("%d %d %d\n",i,j,A[j] - A[i]);

        if (A[j] - A[i] == B)
            return 1;
        j++;
    }
    return 0;
}
