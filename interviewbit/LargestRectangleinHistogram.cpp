int Solution::largestRectangleArea(vector<int> &A)
{
    stack<int> s;
    int maxArea = 0, area;
    int i;
    for (i = 0; i < A.size(); i++)
    {
        if (s.empty())
        {
            // cout<<"hii 1"<<endl;
            s.push(i);
            continue;
        }
        if (A[i] > A[s.top()])
        {
            // cout<<"A[i]  =  "<<A[i]<<endl;
            // cout<<"hii 2"<<endl;
            s.push(i);
            continue;
        }
        while (!s.empty() && A[i] < A[s.top()])
        {
            // cout<<"mai chla mai chla gaddi le k"<<endl;
            int temp = s.top();
            s.pop();
            if (s.empty())
            {
                area = A[temp] * i;
                // cout<<"current  =  "<<i<<endl;
                // cout<<"1 "<<area<<endl;
            }
            else
            {
                // cout<<"s.top: "<<s.top()<<" "<<A[temp]<<" current: "<<i<<endl;
                area = A[temp] * (i - s.top() - 1);
                // cout<<"2 "<<area<<endl;
            }
            if (area > maxArea)
                maxArea = area;
            // s.push(i);
            // cout<<"s.top() = "<<s.top()<<" current = "<<i<<endl<<endl;
        }
        s.push(i);
    }
    while (!s.empty())
    {
        int temp = s.top();
        s.pop();
        if (s.empty())
        {
            area = A[temp] * i;
            // cout<<"3 "<<area<<endl;
        }
        else
        {
            area = A[temp] * (i - s.top() - 1);
            // cout<<"4 "<<area<<endl;
        }
        if (area > maxArea)
            maxArea = area;
    }
    return maxArea;
}
