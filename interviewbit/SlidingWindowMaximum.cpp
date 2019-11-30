vector<int> Solution::slidingMaximum(const vector<int> &A, int B)
{
    vector<int> res;
    if (B >= A.size())
    {
        int max = INT_MIN;
        for (int i = 0; i < A.size(); i++)
        {
            if (A[i] > max)
                max = A[i];
        }
        res.push_back(max);
        return res;
    }
    bool isFirst = true;
    int index = 0;
    int max = INT_MIN;
    for (int i = 0; i < A.size() - B + 1; i++)
    {
        //  max = INT_MIN;
        int start = i;
        int end = i + B;
        if (isFirst)
        {
            max = A[start];
            // cout<<"true: "<<A[start]<<endl;
            index = start;
            for (int j = start; j < end; j++)
            {
                if (A[j] > max)
                {
                    max = A[j];
                    index = j;
                }
            }
            if (index <= start)
                isFirst = true;
            else
                isFirst = false;
        }
        else
        {
            // cout<<"false: "<<A[start]<<endl;
            if (A[start + B - 1] >= max)
            {
                max = A[start + B - 1];
                index = start + B - 1;
            }
            if (index <= start)
                isFirst = true;
            else
                isFirst = false;
        }
        res.push_back(max);
    }
    return res;
}
