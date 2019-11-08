/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode *Solution::swapPairs(ListNode *A)
{
    if (A == NULL || A->next == NULL)
        return A;
    ListNode *temp = A;
    ListNode *prev = NULL;
    ListNode *temp2 = NULL;
    ListNode *next = NULL;
    while (temp && temp->next)
    {
        next = temp->next->next;
        temp2 = temp->next;
        temp2->next = temp;
        temp->next = next;
        if (prev == NULL)
            A = temp2;
        else
            prev->next = temp2;
        prev = temp;
        temp = temp->next;
    }
    return A;
}
