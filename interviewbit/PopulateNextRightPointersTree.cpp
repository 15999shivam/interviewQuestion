/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
 TreeLinkNode* nextRight(TreeLinkNode * current)
 {
     TreeLinkNode* curNext = current->next;
     while(curNext)
     {
         if(curNext->left)
            return curNext->left;
        else
            if(curNext->right)
                return curNext->right;
        curNext  = curNext->next;   
     }
     return NULL;
 }
void Solution::connect(TreeLinkNode* A) {
    if(!A)
    return;
    A->next = NULL;
    while(A){
        TreeLinkNode *B = A;
        while(B){
            if(B->left)
            {
                if(B->right)
                    B->left->next = B->right;
                else
                    B->left->next = nextRight(B);
            }
            if(B->right)
                B->right->next = nextRight(B);
            B = B->next;
        }
        if(A->left)
            A=A->left;
        else
            if(A->right)
                A=A->right;
            else
                A=nextRight(A);
            
    }
}
