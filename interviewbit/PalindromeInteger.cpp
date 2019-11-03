/**
 * @input A : Integer
 * 
 * @Output Integer
 */
int isPalindrome(int A)
{
    if (A < 0)
        return 0;
    int b = 0;
    int temp = A;
    while (temp != 0)
    {
        b = b * 10 + temp % 10;
        temp /= 10;
    }
    // printf("%d",b);
    return b == A;
}
