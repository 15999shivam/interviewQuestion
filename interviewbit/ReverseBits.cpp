unsigned int Solution::reverse(unsigned int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    unsigned int num =0;
    // A = A>>1;
    // num  = num<<1;
    
    for (int i=0;i<32;i++){
        //  cout<<((A&1)?1:0);
        // cout<<A<<endl;
        if(A&1){
            // cout<<"1";
            A = A>>1;
            num = num|1;
            if(i<31)
            num = num<<1;
        }
        else{
            // cout<<"0";
             A = A>>1;
              if(i<31)
            num = num<<1;
        }
       
    }
    // cout<<endl;
    return num;
}
