/**
 * @input A : String termination by '\0'
 * 
 * @Output string. Make sure the string ends with null character
 */
#include <stdbool.h>
struct node
{
    char data;
    struct node *next;
};
void push(struct node **n, char v)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node *));
    newnode->data = v;
    newnode->next = *n;
    *n = newnode;
}
bool isempty(struct node **n)
{
    if (*n == NULL)
        return 0;
    else
        return 1;
}
char pop(struct node **n)
{
    char res = (*n)->data;
    *n = (*n)->next;
    return res;
}
int peek(struct node **n)
{
    return (*n)->data;
}
char *solve(char *A)
{
    int i = 0, size = 0, k = 0;
    struct node *stack;
    for (i = 0; A[i] != '\0'; i++)
    {
        size++;
    }
    char *c = (char *)malloc(sizeof(char) * size);
    for (i = size - 1; i >= 0; i--)
    {
        if (A[i] == ' ')
        {
            while (isempty(&stack))
            {
                c[k] = pop(&stack);
                k++;
            }
            c[k] = ' ';
            k++;
        }
        else
        {
            push(&stack, A[i]);
        }
    }
    while (isempty(&stack))
    {
        c[k] = pop(&stack);
        k++;
    }
    c[k] = '\0';
    return c;
}
