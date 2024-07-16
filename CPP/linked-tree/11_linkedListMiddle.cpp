#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; 

int getMiddle(Node *head)
{
    // Your code here
    struct Node *temp;
    int count = 0;
    temp = head;
    while(temp){
        count++;
        temp = temp->next;
    }
    if (count==0) return -1;
    int mid = count/2+1;
    count = 1;
    temp = head;
    while(temp){
        if (count==mid){
            return temp->data;
        }
        count++;
        temp = temp->next;
    }
    return -1;
}