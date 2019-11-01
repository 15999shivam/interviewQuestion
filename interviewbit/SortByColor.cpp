/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Void. Just modifies the args passed by reference 
 */

void sortColors(int *A, int n1)
{
    int a[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        a[i] = 0;
    }
    for (i = 0; i < n1; i++)
    {
        a[A[i]]++;
    }

    int j = 0;
    for (i = 0; i < n1; i++)
    {
        while (a[j]-- != 0)
        {
            A[i++] = j;
        }
        j++;
        i--;
    }
}
