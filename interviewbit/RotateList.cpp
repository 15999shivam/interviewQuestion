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
listnode *rotateRight(listnode *A, int B)
{
    if (A == NULL || A->next == NULL)
        return A;
    int count = 0;
    listnode *next = NULL;
    listnode *prev = NULL;
    listnode *temp = A;
    while (temp != NULL)
    {
        count++;
        prev = temp;
        temp = temp->next;
    }
    B = B % count;
    if (B == 0)
        return A;
    // printf("%d\n",B);
    temp = A;
    while (temp != NULL)
    {
        count--;
        if (count == B)
        {
            // printf("HII\n");
            next = temp->next;
            temp->next = NULL;
            prev->next = A;
            A = next;
            break;
        }
        temp = temp->next;
    }
    // printf("%d",A->val);
    return A;
}
