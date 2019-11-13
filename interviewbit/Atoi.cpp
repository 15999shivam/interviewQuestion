int Solution::atoi(const string A)
{
    int n = 0;
    int isneg = 0;
    int iseffected = 0;
    for (int m = 0; A[m] != '\0'; m++)
    {
        if (m > 0)
            if (A[m] == '-' && A[m - 1] != ' ')
                return 0;
        if (A[m] == '-' && n == 0)
        {
            // n = n*-1;
            isneg = 1;
            if (!(A[m + 1] >= '0' && A[m + 1] <= '9'))
            {
                return 0;
            }
            // m++;
            continue;
        }
        if (A[m] == '+' && n == 0)
        {
            // n = n*-1;
            // isneg = 1;
            if (!(A[m + 1] >= '0' && A[m + 1] <= '9'))
            {
                return 0;
            }
            // m++;
            continue;
        }
        if (A[m] == ' ' && iseffected == 1)
        {
            // cout<<"hiii";
            if (isneg)
                n = n * -1;
            return n;
        }
        if ((A[m] == ' ' || A[m] == '+') && n == 0)
            continue;

        int i = A[m] - '0';

        if (!(i == 0 || i == 1 || i == 2 || i == 3 || i == 4 || i == 5 || i == 6 || i == 7 || i == 8 || i == 9) && n == 0)
            return 0;
        if ((i == 0 || i == 1 || i == 2 || i == 3 || i == 4 || i == 5 || i == 6 || i == 7 || i == 8 || i == 9))
        {
            if (n > (INT_MAX / 10))
            {
                //   cout<<n<<endl;
                if (isneg)
                    return INT_MIN;
                return INT_MAX;
            }
            n = n * 10 + i;
            iseffected = 1;
            // cout<<"i a effexted";
            // cout<<"yooo"<<(n*10+i);
        }
        else
        {
            // cout<<"hii";
            break;
        }
    }
    if (isneg)
        n = n * -1;
    // cout<<n;
    // cout<<INT_MAX;
    return n;
}
