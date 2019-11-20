// int diff(int a,int b){
//     // cout<<"hi"<<endl;
//     int count= 0;
//     while(a || b){

//         if((a&1) != (b&1))
//         {
//             // cout<<"a = "<<a<<" b = "<<b<<endl;
//             //  cout<<"a&1 = "<<(a&1)<<" b&1 = "<<(b&1)<<endl;
//             count++;

//         }
//          a = a>>1;
//          b = b>>1;
//     }
//     return count;
// }

// int Solution::cntBits(vector<int> &arr) {
//     // int res = 0;
//     // for(int i = 0;i<A.size();i++){
//     //     for(int j = 0;j<A.size();j++){
//     //         int ans = diff(A[i],A[j]);
//     //         res+=ans;
//     //         // cout<<ans<<" ";
//     //     }
//     //     // cout<<endl;
//     // }
//     // // cout<<diff(3,3)<<endl;
//     // // cout<<diff(1,1)<<endl;
//     // return res;
//      int ans = 0;  // Initialize result
//   long n = arr.size();
//     // traverse over all bits
//     for (int i = 0; i < 32; i++)
//     {
//         // count number of elements with i'th bit set
//         int count = 0;
//         for (long j = 0; j < n; j++)
//             if ( (arr[j] & (1 << i)) )
//                 count++;

//         // Add "count * (n - count) * 2" to the answer
//         ans += (count * (n - count) * 2)%1000000007;
//     }

//     return ans;
// }

typedef long long LL;
#define MOD 1000000007ll
int Solution::cntBits(vector<int> &A)
{
    int n = A.size();
    int sum = 0;

    // since in +ve numbers 31st bit will always be 0 so no need to check that
    for (auto i = 0; i < 31; ++i)
    {
        // count number of elements with i'th bit set
        LL count = 0; // previously int count gave WA
        for (auto j = 0; j < n; ++j)
            if (A[j] & (1 << i))
                ++count;                            // count is the number of set(1) bits, so (n - count) will give number of unset(0) bits
        sum += (count * ((LL)n - count) * 2) % MOD; // previously didn't used LL & MOD gave WA
                                                    // we are calculating differences for (x,y) so for (y,x) just multiply it with 2
                                                    // So FORMULA = COUNT * (N - COUNT ) *2

        if (sum >= MOD) // previously didn't add this check gave WA
            sum -= MOD;
    }
    return sum;
}
