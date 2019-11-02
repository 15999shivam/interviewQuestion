/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer
 */
int removeDuplicates(int *arr, int n1)
{
    int k, i, j = 0;
    int count = 0;
    for (i = 0; i < n1; i++)
    {
        if (!(i + 1 < n1 && arr[i + 1] == arr[i]))
        {
            arr[j++] = arr[i];
            count++;
        }
    }
    return count;
}
