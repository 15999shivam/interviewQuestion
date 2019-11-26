int Solution::canJump(vector<int> &A)
{
    if (A.size() == 0 || A.size() == 1)
        return 1;
    vector<bool> temp(A.size(), false);
    temp[0] = true;
    for (int i = 0; i < A.size(); i++)
    {
        int t = A[i];
        if (temp[i])
        {
            // cout<<"hii"<<endl;
            // cout<<"i+t+1 = "<<(i+t+1)<<endl;
            for (int j = i + 1; (j < A.size() && j < (i + t + 1)); j++)
            {
                // cout<<"yoo"<<endl;
                temp[j] = true;
                if (j == (A.size() - 1))
                {
                    // cout<<"hii";
                    return 1;
                }
            }
        }
    }

    return temp[A.size() - 1] ? 1 : 0;
}
