/**
 * @input A : array of strings termination by '\0'
 * @input n1 : number of strings in array A
 * 
 * @Output string. Make sure the string ends with null character
 */
char *longestCommonPrefix(char **A, int n1)
{
    int i = 0, j = 0, min = INT_MAX, count = 0;
    if (n1 == 0)
        return "";
    if (n1 <= 1)
        return A[0];
    for (i = 1; i < n1; i++)
    {
        count = 0;
        for (j = 0; A[i][j]; j++)
        {
            if (A[0][j] == A[i][j])
            {
                count++;
            }
            else
            {
                break;
            }
        }
        if (min > count)
        {
            min = count;
        }
    }
    char *c = (char *)malloc(sizeof(char) * min);
    for (i = 0; i < min; i++)
    {
        c[i] = A[0][i];
    }
    return c;
}