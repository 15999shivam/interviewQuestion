#define ll long long int
int Solution::sqrt(int A)
{
    if (A == 1)
        return 1;
    ll low = 0, high = A / 2;
    ll mid = low + (high - low) / 2;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (mid * mid <= A && (mid + 1) * (mid + 1) > A)
            return mid;
        else if (mid * mid > A)
            high = mid - 1;
        else
            low = mid + 1;
    }
}
