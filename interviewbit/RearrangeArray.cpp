/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Void. Just modifies the args passed by reference 
 */
void arrange(int *arr, int n)
{
    int i;
    for (i = 0; i < n; i++)
        arr[i] += (arr[arr[i]] % n) * n;

    // Second Step: Divide all values by n
    for (i = 0; i < n; i++)
        arr[i] /= n;
}