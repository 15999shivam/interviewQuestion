string LongBoth(string s, int l, int r)
{
    int n = s.length();
    while (l >= 0 && r < n && s[l] == s[r])
    {
        l--;
        r++;
    }
    return s.substr(l + 1, r - l - 1);
}
string Solution::longestPalindrome(string A)
{
    if (A.size() == 0)
        return "";
    string longest = A.substr(0);
    for (int i = 0; i < A.size() - 1; i++)
    {
        string odd = LongBoth(A, i, i);
        if (odd.length() > longest.length())
            longest = odd;
        string even = LongBoth(A, i, i + 1);
        if (even.length() > longest.length())
            longest = even;
    }
    return longest;
}
