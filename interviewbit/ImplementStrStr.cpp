
int Solution::strStr( string A,  string B) {
    // int index = -1;
    // if (haystack.empty() || needle.empty())
    //     return index;
    // for (auto i = 0; i<haystack.length(); ++i)
    // {
    //     if (haystack[i]==needle[0])
    //     {
    //         index = i;
    //         int j = 0;
    //         while (j<needle.length())
    //         {
    //             if (needle[j]==haystack[i] && i<haystack.length())
    //             {
    //                 ++i; ++j;
    //             }
    //             else
    //             {
    //                 index = -1;
    //                 i -= j;
    //                 break;
    //             }
    //         }
    //         if (j==needle.length())
    //             return index;
    //     }
    // }
    // return index;
    int start=0,temp_start=start,j=0;
    while(temp_start<A.size() && j<B.size())
    {
        if(A[temp_start]==B[j])
        {
            temp_start++,j++;
        }
        else
        {
            j=0,temp_start=++start;
        }
        if(j==B.size()) return start;
    }
    return -1;
}