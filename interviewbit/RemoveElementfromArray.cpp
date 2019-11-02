/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer
 * 
 * @Output Integer
 */
int removeElement(int *A, int n1, int B)
{
    int i, j = 0;
    int count = 0;
    for (i = 0; i < n1; i++)
    {
        if (A[i] != B)
        {
            A[j++] = A[i];
            count++;
        }
    }
    return count;
}
