/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer
 */
int maxArea(int *A, int n1)
{
    int maxarea = 0;
    int i = 0, j = n1 - 1;
    while (i < j)
    {
        int min = A[i] > A[j] ? A[j] : A[i];
        int area = min * (j - i);
        if (A[i] > A[j])
            j--;
        else
            i++;
        if (area > maxarea)
            maxarea = area;
    }
    return maxarea;
}
