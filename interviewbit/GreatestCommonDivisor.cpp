/**
 * @input A : Integer
 * @input B : Integer
 * 
 * @Output Integer
 */
int gcd(int A, int B)
{
    if (A == 0)
        return B;
    if (B == 0)
        return A;
    int max = A > B ? A : B;
    int min = A < B ? A : B;
    while (max != 0 && min != 0)
    {
        max = max - min;
        if (max == 0)
        {
            return min;
        }
        if (max < min)
        {
            int temp = max;
            max = min;
            min = temp;
        }
    }
    return 1;
}
