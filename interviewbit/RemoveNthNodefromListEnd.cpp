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
listnode *removeNthFromEnd(listnode *A, int B)
{
    int count = 0;
    listnode *temp = A;
    listnode *prev = NULL;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    // B = B%count;
    if (B > count)
        return A->next;
    if (count - B == 0)
    {
        return A->next;
    }
    // printf("while");
    temp = A;
    while (temp != NULL && temp->next != NULL)
    {
        // printf("yoyo\n");
        count--;
        if (count == B)
        {
            // printf("hii\n");
            temp->next = temp->next->next;
        }
        temp = temp->next;
    }
    return A;
}
