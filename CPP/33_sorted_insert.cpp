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
    Node *boy = new Node(data);
    Node *temp = NULL;
    temp = head;
    if(data<head->data){
        while(temp->next->data>temp->data) temp = temp->next;
        boy->next = head;
        temp->next = boy;
        head = boy;
        return head;
    }
    while(temp->next->data>temp->data){
        
        if (temp->next->data>data){
            boy->next = temp->next;
            temp->next = boy;
            break;
        }
        temp=temp->next;
    }
    if(!boy->next){
        boy->next = temp->next;
        temp->next = boy;
    }
    return head;
            
}