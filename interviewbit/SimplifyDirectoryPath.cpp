string Solution::simplifyPath(string A)
{
    stack<string> s;
    stack<string> t;
    int i = 0;
    string temp = "";
    while (i < A.size())
    {
        while (i < A.size() && A[i] != '/')
        {
            temp += A[i];
            i++;
        }
        if (temp == "..")
        {
            if (!s.empty())
                s.pop();
            i++;
            temp = "";
            continue;
        }
        if (temp == "." || temp == "")
        {
            i++;
            temp = "";
            continue;
        }
        i++;

        s.push(temp);
        temp = "";
    }

    while (!s.empty())
    {
        t.push(s.top());
        // cout<<"s.top(): "<<s.top()<<endl;
        s.pop();
    }
    temp = "/";
    while (!t.empty())
    {
        temp += t.top();
        t.pop();
        if (!t.empty())
        {
            temp += "/";
        }
    }
    return temp;
}
