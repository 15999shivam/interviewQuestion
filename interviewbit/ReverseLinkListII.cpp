/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 * 
 * typedef struct ListNode listnode;
 * 
 * listnode* listnode_new(int val) {
 *     listnode* node = (listnode *) malloc(sizeof(listnode));
 *     node->val = val;
 *     node->next = NULL;
 *     return node;
 * }
 */
/**
 * @input A : Head pointer of linked list 
 * @input B : Integer
 * @input C : Integer
 * 
 * @Output head pointer of list.
 */
listnode *reverseBetween(listnode *A, int B, int C)
{
    if (A == NULL || A->next == NULL)
        return A;
    listnode *start = NULL;
    listnode *mid1 = NULL;
    listnode *mid2 = NULL;
    listnode *end = NULL;
    listnode *temp = A;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        if (count == B)
        {
            // printf("mid1 = %d",temp->val);
            mid1 = temp;
        }
        if (count == C)
        {
            // printf("mid2 = %d",temp->val);
            mid2 = temp;
            end = temp->next;
        }
        if (count + 1 == B)
            start = temp;
        temp = temp->next;
    }
    mid2->next = NULL;
    listnode *current = NULL;
    listnode *prev = NULL;
    listnode *next = NULL;
    current = mid1;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    if (start != NULL)
    {
        start->next = prev;
    }
    else
    {
        A = prev;
    }
    mid1->next = end;
    return A;
}
