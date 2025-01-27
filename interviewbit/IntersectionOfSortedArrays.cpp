/**
 * @input A : Read only ( DON'T MODIFY ) Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Read only ( DON'T MODIFY ) Integer array
 * @input n2 : Integer array's ( B ) length
 * 
 * @Output Integer array. You need to malloc memory, and fill the length in len1
 */
int* intersect(const int* A, int n1, const int* B, int n2, int *len1) {
    int i = 0;
    int j = 0;
    int k = 0;
    int *res = (int *)malloc(sizeof(int)*(n1>n2?n1:n2));
    while(i<n1&& j<n2)
    {
        if(A[i] == B[j])
        {
            res[k] = A[i];
            k++;
            i++;
            j++;
            continue;
        }
        if(A[i]>B[j]){
            j++;
            continue;
        }
        if(A[i]<B[j]){
            i++;
            continue;
        }
    }
    *len1 = k;
    return res;
}
