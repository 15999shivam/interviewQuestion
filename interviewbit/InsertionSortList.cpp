/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 void print(ListNode *A){
     while(A!=NULL){
         cout<<A->val<<" ";
         A = A->next;
     }
     cout<<endl<<endl;
 }
ListNode* Solution::insertionSortList(ListNode* A) {
    ListNode* next1 = NULL;
    ListNode* prev = NULL;
    ListNode* next2 = NULL;
    ListNode* temp = A;
    ListNode* temp2 = NULL;
    while(temp->next!=NULL){
        // print(A);
        if(temp->val>temp->next->val){
            next1 = temp->next;
            temp2 = temp;
            while(temp2->next!=NULL ){
                temp2 = temp2->next;
            }
            next2 = temp2->next;
            if(prev ==NULL)
                A = next1;
            else
                prev->next = next1;
            temp2->next = temp;
            temp->next = next2;
            temp = A;
            prev = NULL;
            continue;
        }
        prev = temp;
        temp = temp->next;
    }
    return A;
}
