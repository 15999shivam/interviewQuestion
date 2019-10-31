int Solution::firstMissingPositive(vector<int> &A) {
    int positive = 1;
    // cout<<A.size()<<endl;
    for(int i=0;i<A.size();i++)
    {
        int temp;
        if(A[i]>0 && A[i]-1<A.size())
        {
            while( A[i]>0 && A[i]-1<A.size() && A[i] != A[A[i]-1] )
            {
                  int a = A[i];
                    int b =  A[A[i]-1];
                    // cout<<"true"<<endl;
                    A[A[i]-1] = a;
                    A[i] = b;
            }
          
        //   cout<<"temp = "<<temp<<endl;
        //  cout<<"temp = "<<temp<<" A[A[i]-1] = "<<A[A[i]-1]<<" A[i] = "<<A[i]<<" i = "<<i<<endl;
        // for(int k=0;k<A.size();k++)
        // {
        //     cout<<A[k]<<" ";
        // }
        // cout<<endl<<endl;
        }
         
    }
    // for(int k=0;k<A.size();k++)
    //     {
    //         cout<<A[k]<<", ";
    //     }
    //     cout<<endl;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]==positive)
        {
            positive++;
        }
    }
        // cout<<A.size()<<endl;

    return positive;
}
