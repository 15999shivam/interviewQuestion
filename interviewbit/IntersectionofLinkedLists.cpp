int findLength(ListNode *temp)
{
    int l = 0;
    while (temp != NULL)
    {
        l++;
        temp = temp->next;
    }
    return l;
}
ListNode *findMerge(ListNode *h1, ListNode *h2, int l1, int l2)
{
    ListNode *t1 = h1;
    ListNode *t2 = h2;
    for (int i = 0; i < l1 - l2; i++)
        t1 = t1->next;
    //cout<<t1->val<<endl;
    while (t1 != NULL && t2 != NULL)
    {
        if (t1 == t2)
            return t1;
        t1 = t1->next;
        t2 = t2->next;
    }
}
ListNode *Solution::getIntersectionNode(ListNode *A, ListNode *B)
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int l1 = findLength(A);
    int l2 = findLength(B);
    //cout<<l1<<" "<<l2<<endl;
    ListNode *ans = NULL;
    if (l1 > l2)
    {
        ans = findMerge(A, B, l1, l2);
    }
    else
        ans = findMerge(B, A, l2, l1);
    return ans;
}