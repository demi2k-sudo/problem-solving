#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};


class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        struct Node* A=NULL,*B=NULL,*C=NULL;
        A = head;
        if (head->next)
            B = head->next;
        else return head;
        if(B->next)
            C = B->next;
        else{
            B->next = A;
            A->next = NULL;
            return B;
        }
        A->next = NULL;
        while(C){
            B->next = A;
            A = B;
            B = C;
            C = C->next;
        }
        B->next = A;
        return B;
    }
    
};