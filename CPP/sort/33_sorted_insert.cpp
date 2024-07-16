#include<iostream>
using namespace std;

struct Node
{
  int data;
  struct Node *next;
  
  Node(int x){
      data = x;
      next = NULL;
  }
  
};
Node *sortedInsert(Node* head, int data)
{
    //Your code here
    Node* curr= head;
    Node* temp= new Node(data);
    
    if(!curr){
        temp->next=temp;
        head= temp;
        return head;
    }
    
    else if(head && temp->data<=head->data){
        while(curr && curr->next && curr->next!=head)
        curr= curr->next;
        
        curr->next= temp;
        temp->next=head;
        return temp;
    }
    
    
    else{
        
        while(curr && curr->next && curr->next!=head && curr->next->data<=data)
        {
            curr= curr->next;
        }
        
        
            temp->next= curr->next;
            curr->next= temp;
            return head;
    }
    
}