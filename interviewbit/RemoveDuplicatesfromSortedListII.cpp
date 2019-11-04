/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode *Solution::deleteDuplicates(ListNode *A)
{
    ListNode *temp = A;
    int flag = 0;
    // ListNode *list;
    ListNode *prev = NULL;
    while (temp != NULL && temp->next != NULL)
    {
        //  cout<<"temp: "<<temp->val<<" temp->next: "<<temp->next->val<<endl;
        if (temp->val == temp->next->val)
        {
            temp->next = temp->next->next;
            flag = 1;
        }
        else
        {
            if (flag == 1)
            {
                if (prev == NULL)
                {
                    // cout<<"A: "<<A->val<<" A->next: "<<A->next->val<<endl;
                    //  cout<<"temp: "<<temp->val<<" temp->next: "<<temp->next->val<<endl;
                    A = A->next;
                    temp = A;
                }
                else
                {
                    prev->next = prev->next->next;
                    temp = temp->next;
                }
                flag = 0;
            }
            else
            {
                // cout<<temp->val<<endl;
                prev = temp;
                temp = temp->next;
            }
        }
    }
    if (flag == 1)
    {
        if (prev == NULL)
        {
            // cout<<"A: "<<A->val<<" A->next: "<<A->next->val<<endl;
            //  cout<<"temp: "<<temp->val<<" temp->next: "<<temp->next->val<<endl;
            A = A->next;
            temp = A;
        }
        else
        {
            prev->next = prev->next->next;
            temp = temp->next;
        }
        flag = 0;
    }
    return A;
}
