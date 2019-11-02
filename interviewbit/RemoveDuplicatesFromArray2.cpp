/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer
 */
int removeDuplicates(int *arr, int n1)
{
    int i, j = 0, k;
    int count = 0;
    int times;
    for (i = 0; i < n1; i++)
    {
        k = arr[i];
        times = 0;
        while (i + 1 < n1 && arr[i + 1] == k)
        {
            times++;
            i++;
        }
        // printf("times: %d\n",times);
        if (times >= 1)
        {
            count++;
            arr[j++] = k;
        }
        count++;
        arr[j++] = k;
    }
    return count;
}
