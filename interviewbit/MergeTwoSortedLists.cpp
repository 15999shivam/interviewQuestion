/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode *Solution::mergeTwoLists(ListNode *A, ListNode *B)
{
    ListNode *temp1 = A;
    ListNode *temp2 = B;
    ListNode *prev = NULL;
    ListNode *next = NULL;
    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->val < temp2->val)
        {
            prev = temp1;
            temp1 = temp1->next;
        }
        else
        {
            if (prev == NULL)
            {
                A = temp2;
                next = temp2->next;
                temp2->next = temp1;
                prev = temp2;
                temp2 = next;
            }
            else
            {
                prev->next = temp2;
                next = temp2->next;
                temp2->next = temp1;
                prev = temp2;
                temp2 = next;
            }
        }
    }
    //  cout<<temp2->val<<endl;
    while (temp2 != NULL)
    {
        prev->next = temp2;
        prev = prev->next;
        temp2 = temp2->next;
    }
    return A;
}
