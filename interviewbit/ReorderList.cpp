/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode *Solution::reorderList(ListNode *A)
{
    if (A == NULL || A->next == NULL)
        return A;
    int count = 0;
    ListNode *temp = A;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    if (count <= 2)
        return A;
    ListNode *head1;
    ListNode *head2;
    int breakpoint = count % 2 == 0 ? (count / 2 - 1) : count / 2;
    // cout<<"breakpoint = "<<breakpoint<<endl;
    temp = A;
    count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
        if (count == breakpoint)
        {
            break;
        }
    }
    head2 = temp->next;
    temp->next = NULL;
    head1 = A;
    // cout<<"head1 "<<head1->val<<" head2 "<<head2->val<<endl;

    //reverse list 2
    ListNode *current = head2;
    ListNode *prev = NULL;
    ListNode *next = NULL;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head2 = prev;

    ListNode *temp1 = NULL;
    ListNode *temp2 = NULL;
    while (head1 && head2)
    {
        temp1 = head1->next;
        temp2 = head2->next;
        head1->next = head2;
        head2->next = temp1;
        head2 = temp2;
        head1 = temp1;
    }
    return A;
}
