int abs(int x){
     if (x < 0) return -x;
      else return x;
}
int Solution::minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C) {
      int i = 0;
    int j = 0;
    int k = 0;
    int max1 = INT_MAX;
    // int max = INT_MIN;
    int maxDiff = INT_MAX;
    while(i<A.size()&& j<B.size()&& k<C.size())
    {
        max1 =  max(max(abs(A[i] - B[j]), abs(B[j] - C[k])), abs(C[k] - A[i]));
                    if(max1<maxDiff)
                        maxDiff = max1;
        if(A[i]>B[j])
        {
            
            if(A[i]>C[k]){
                //A is greatest 
                if(B[j]>C[k])
                {
                    // C is smallest
                         k++;
                }else{
                    //B is smallest
                    // min = A[i]-B[j];
                    j++;
                    // if(min<minDiff)
                    //     minDiff = min;
                }
            }else{
                //it means that C is greatest b is smallest
                // min = C[k]-B[j];
                j++;
                // if(min<minDiff)
                //         minDiff = min;
            }
        }
        else{
           if(B[j]>C[k]){
               //Bis gretaest
                if(A[i]>C[k])
                {
                    //c is smallest
                    // min = B[j]-C[k];
                    k++;
                    // if(min<minDiff)
                    //     minDiff = min;
                }else{
                    //a is smallest
                    // min = B[j]-A[i];
                    i++;
                    // if(min<minDiff)
                    //     minDiff = min;
                }
            }else{
                //it means that C is greatest and a is smallest
                    // min = C[k]-A[i];
                    i++;
                    // if(min<minDiff)
                    //     minDiff = min;
            }
        }
    }
    return maxDiff;
}
