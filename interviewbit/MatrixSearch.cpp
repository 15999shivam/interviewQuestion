int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    if(A.size() == 0)return 0;
    // cout<<"B = "<<B<<endl;
    for(int i=0;i<A.size();i++){
        if(A[i].size()!=0)
        {
            // cout<<(A[i][0]<=B)<<" "<<(A[i][A[i].size()-1]>=B)<<" "<<B<<endl;
            if(A[i][0]<=B && A[i][A[i].size()-1]>=B)
            {
                // cout<<"hiii"<<endl;
                int l = 0;
                int h = A[i].size();
                while(l<=h)
                {
                    int mid = (l+h)/2;
                    if(A[i][mid] == B)
                    {
                        return 1;
                    }
                    else
                    if(A[i][mid] > B)
                    {
                        h = mid-1;
                    }
                    else{
                        l = mid+1;
                    }
                }
                break;
            }
        }
    }
    return 0;
}
