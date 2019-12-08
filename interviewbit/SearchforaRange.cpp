// int findIndex(vector<int>A,int B,bool isLeft)
// {
//     int res = -1;
//     long l = 0;
//     int h = A.size();
//     while(l<=h)
//     {
//         int mid = (l+h)/2;
//         if(A[mid] == B)
//         {
//             res = mid;
//             if(isLeft)
//                 h = mid-1;
//             else
//                 l = mid+1;
//         }
//         else
//         if(A[mid]>B)
//             h = mid-1;
//         else
//             l = mid+1;
//     }
//     return res;
// }
// vector<int> Solution::searchRange(const vector<int> &A, int B) {
//     vector<int> res;
//     if(A.size() == 0)return res;
//     int first = findIndex(A,B,true);
//     if(first == -1){
//         res.push_back(-1);
//         res.push_back(-1);
//         return res;
//     }
//     else{
//         res.push_back(first);
//         int second = findIndex(A,B,false);
//         res.push_back(second);
//         return res;
//     }
// }
int binarySearch(const vector<int> &A, int key, bool searchFirst)
{
    int start = 0;
    int end = A.size() - 1;
    int mid;
    int result = -1;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (A[mid] == key)
        {
            result = mid;
            if (searchFirst)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else if (A[mid] > key)
        {
            end = mid - 1;
        }
        else
        { // A[mid] < key
            start = mid + 1;
        }
    }
    return result;
}

vector<int> Solution::searchRange(const vector<int> &A, int B)
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<int> sol;

    sol.push_back(binarySearch(A, B, true));
    sol.push_back(binarySearch(A, B, false));

    return sol;
}
