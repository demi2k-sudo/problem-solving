#include <iostream>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  
  Node(int x) {
    data = x;
    next = NULL;
  }
};
//Function to merge two sorted linked list.
Node* sortedMerge(Node* head1, Node* head2)  
{  
    struct Node *ptr1=NULL,*ptr2=NULL,*temp=NULL,*final=NULL;
    if (head1->data>head2->data){
        ptr1 = head1;
        ptr2 = head2;
    }
    else{
        ptr1 = head2;
        ptr2 = head1;
    }
    final = ptr2;
    while(ptr1->next&&ptr2->next){
        while(ptr2->next&&ptr2->next->data<=ptr1->data){
            ptr2 = ptr2->next;
        }
        temp = ptr1;
        ptr1 = ptr1->next;
        temp->next = ptr2->next;
        ptr2->next = temp;
    }
    // cout<<ptr1->data<<" "<<ptr2->data<<endl;
    if(ptr2->next){
        while(ptr2->next&&ptr2->next->data<=ptr1->data){
            ptr2 = ptr2->next;
        }
        ptr1->next = ptr2->next;
        ptr2->next = ptr1;
    }
    else{
        ptr2->next = ptr1;
    }
    return final;
}