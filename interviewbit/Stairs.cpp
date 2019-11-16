int Solution::climbStairs(int A)
{
    // if(A==0 || A==1)
    // {
    //     return 1;
    // }
    // else{
    //     int a = climbStairs(A-1);
    //     int b = climbStairs(A-2);
    //     return a+b;
    // }
    int *arr = new int[A + 1];
    arr[0] = 1;
    arr[1] = 1;
    for (int i = 2; i <= A; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    return arr[A];
}
