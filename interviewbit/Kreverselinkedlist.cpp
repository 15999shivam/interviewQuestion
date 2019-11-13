/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode *Solution::reverseList(ListNode *A, int B)
{
    if (A == NULL)
        return A;
    ListNode *temp = A;
    ListNode *next = NULL;
    ListNode *start = NULL;

    ListNode *current = A;
    ListNode *prev = NULL;
    ListNode *nextcurr = NULL;
    int counter = B;
    while (temp != NULL)
    {
        counter--;
        if (counter == 0)
        {
            next = temp->next;
            prev = NULL;
            ListNode *curtemp = current;
            while (current != next)
            {
                nextcurr = current->next;
                current->next = prev;
                prev = current;
                current = nextcurr;
            }
            curtemp->next = next;
            if (start == NULL)
            {
                A = prev;
            }
            else
            {
                start->next = prev;
            }
            start = curtemp;
            counter = B;
            current = curtemp->next;
            temp = curtemp;
            // cout<<temp->val<<endl;
        }
        temp = temp->next;
    }
    return A;
}
