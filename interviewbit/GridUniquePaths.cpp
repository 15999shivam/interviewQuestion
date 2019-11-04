/**
 * @input A : Integer
 * @input B : Integer
 * 
 * @Output Integer
 */
int sum(int A, int B)
{
    if (A == 1 || B == 1)
    {
        return 1;
    }

    else
    {
        return sum(A - 1, B) + sum(A, B - 1);
    }
}
int uniquePaths(int A, int B)
{
    return sum(A, B);
}
