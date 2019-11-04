/**
 * @input A : String termination by '\0'
 * 
 * @Output Integer
 */
int po(int m, int n)
{
    int i;
    int x = m;
    for (i = 1; i < n; i++)
    {
        x = x * m;
    }
    return m;
}
int titleToNumber(char *A)
{
    int count = 0;
    int i;
    for (i = 0; A[i] != '\0'; i++)
    {
        count++;
    }
    // printf("count = %d",count);
    int number = 0;
    for (i = 0; A[i + 1] != '\0'; i++)
    {
        count--;
        // printf("%d\n",count)-1;
        // printf("po: %d\n",po(26,count));

        number += po(26, count) * (A[i] - 64);
        printf("number = %d\n", number);
    }

    number += A[i] - 64;
    return number;
}
