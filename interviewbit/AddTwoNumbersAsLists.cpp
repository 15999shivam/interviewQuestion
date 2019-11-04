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
 * @input B : Head pointer of linked list 
 * 
 * @Output head pointer of list.
 */
listnode* addTwoNumbers(listnode* A, listnode* B) {
    int carry = 0;
    listnode *tempa = A;
    listnode *tempb = B;
    listnode *temp = NULL;
    listnode *head= NULL;
    while(tempa != NULL && tempb != NULL){
        listnode *newnode = (listnode*)malloc(sizeof(listnode));
        newnode->next = NULL;
        newnode->val = tempa->val + tempb->val + carry;
        carry = newnode->val/10;
        newnode->val %=10;
        if(head == NULL){
            head = newnode;
            temp = newnode;
        }else{
            temp->next = newnode;
            temp = temp->next;
        }
        tempa = tempa->next;
        tempb= tempb->next;
    }
    while(tempa != NULL){
        listnode *newnode = (listnode*)malloc(sizeof(listnode));
        newnode->next = NULL;
        newnode->val = tempa->val +carry;
        carry = newnode->val/10;
        newnode->val %=10;
        if(head == NULL){
            head = newnode;
            temp = newnode;
        }else{
            temp->next = newnode;
            temp = temp->next;
        }
                tempa = tempa->next;

    }
    while(tempb != NULL){
        listnode *newnode = (listnode*)malloc(sizeof(listnode));
        newnode->next = NULL;
        newnode->val = tempb->val + carry;
        carry = newnode->val/10;
        newnode->val %=10;
        if(head == NULL){
            head = newnode;
            temp = newnode;
        }else{
            temp->next = newnode;
            temp = temp->next;
        }
                tempb= tempb->next;

    }
    if(carry!=0){
         listnode *newnode = (listnode*)malloc(sizeof(listnode));
        newnode->next = NULL;
        newnode->val =  carry;
        carry = newnode->val/10;
        if(head == NULL){
            head = newnode;
            temp = newnode;
        }else{
            temp->next = newnode;
            temp = temp->next;
        }
    }
    return head;
}
