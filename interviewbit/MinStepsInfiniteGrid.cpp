int Solution::coverPoints(vector<int> &A, vector<int> &B)
{
    int count = 0;
    for (int i = 0; i < A.size() - 1; i++)
    {
        int x1 = A[i];
        int y1 = B[i];
        int x2 = A[i + 1];
        int y2 = B[i + 1];

        if (x1 <= x2)
        {
            if (y1 <= y2)
            {
                while (x1 < x2 && y1 < y2)
                {
                    count++;
                    x1++;
                    y1++;
                }
                while (x1 < x2)
                {
                    count++;
                    x1++;
                }
                while (y1 < y2)
                {
                    count++;
                    y1++;
                }
            }
            else
            {
                while (x1 < x2 && y1 > y2)
                {
                    count++;
                    x1++;
                    y1--;
                }
                while (x1 < x2)
                {
                    count++;
                    x1++;
                }
                while (y1 > y2)
                {
                    count++;
                    y1--;
                }
            }
        }
        else
        {
            if (y1 <= y2)
            {
                while (x1 > x2 && y1 < y2)
                {
                    count++;
                    x1--;
                    y1++;
                }
                while (x1 > x2)
                {
                    count++;
                    x1--;
                }
                while (y1 < y2)
                {
                    count++;
                    y1++;
                }
            }
            else
            {
                while (x1 > x2 && y1 > y2)
                {
                    count++;
                    x1--;
                    y1--;
                }
                while (x1 > x2)
                {
                    count++;
                    x1--;
                }
                while (y1 > y2)
                {
                    count++;
                    y1--;
                }
            }
        }
    }
    return count;
}
