/**
 * @input A : Read only ( DON'T MODIFY ) Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer
 */
int singleNumber(const int *A, int n1)
{
    int el = 0;
    int i = 0;
    for (i = 0; i < n1; i++)
    {
        el = el ^ A[i];
    }
    return el;
}
