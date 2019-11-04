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
 * 
 * @Output head pointer of list.
 */
listnode *partition(listnode *A, int B)
{
    if (A == NULL || A->next == NULL)
        return A;
    listnode *prev = NULL;
    listnode *next = NULL;
    listnode *temp = A;
    listnode *store = NULL;

    while (temp->next != NULL)
    {
        if (temp->val >= B)
        {
            store = prev;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    while (temp->next != NULL)
    {
        if (temp->next->val < B)
        {
            prev = temp->next;
            temp->next = temp->next->next;
            if (store == NULL)
            {
                next = A;
                A = prev;
                prev->next = next;
                store = A;
                continue;
            }
            next = store->next;
            store->next = prev;
            prev->next = next;
            store = store->next;
            continue;
        }
        temp = temp->next;
    }
    return A;
}
