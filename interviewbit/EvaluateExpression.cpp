int Solution::evalRPN(vector<string> &A)
{
    stack<int> s;
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i][0] >= '0' && A[i][0] <= '9' || (A[i][0] == '-' && A[i].length() > 1))
        {
            int res = 0, j = 0;
            if (A[i][0] == '-')
            {
                j++;
            }
            for (; j < A[i].length(); j++)
            {
                res = res * 10 + (A[i][j] - '0');
            }
            if (A[i][0] == '-')
            {
                res = res * -1;
            }
            // cout<<res<<endl;
            s.push(res);
        }
        else
        {
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            switch (A[i][0])
            {
            case '+':
                s.push(a + b);
                // cout<<(a+b)<<endl;
                break;
            case '-':
                s.push(b - a);
                //  cout<<(b-a)<<endl;
                break;
            case '*':
                s.push(a * b);
                //  cout<<(a*b)<<endl;
                break;
            case '/':
                s.push(b / a);
                //  cout<<a<<" "<<b<<endl;
                break;
            }
        }
    }
    return s.top();
}
