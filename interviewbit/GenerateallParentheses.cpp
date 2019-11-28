int Solution::isValid(string A)
{
    if (A.size() == 0 || A.size() % 2 != 0)
        return 0;
    stack<char> s;
    for (char x : A)
    {
        if (x == '(' || x == '{' || x == '[')
            s.push(x);
        else
        {
            if (x == ')')
            {
                if (!s.empty() && s.top() == '(')
                    s.pop();
                else
                    return 0;
            }
            else if (x == '}')
            {
                if (!s.empty() && s.top() == '{')
                    s.pop();
                else
                    return 0;
            }
            else if (x == ']')
            {
                if (!s.empty() && s.top() == '[')
                    s.pop();
                else
                    return 0;
            }
        }
    }
    if (s.empty())
        return 1;
    return 0;
}
