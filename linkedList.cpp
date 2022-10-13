#include<iostream>
#include<stdlib.h>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int data){
        this->data = data;
        this->next = NULL;
    }
};
void display(node *head){

    node *temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
        
}
void insertAtHead(node* &head/*Calling head by value*/, int val){
    node* newnode = new node(val);
    newnode->next = head;
    head = newnode;
}
void insertAtTail(node* &head, int val){
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    node* newnode = new node(val);
    temp->next = newnode;
}
bool searchNode(node* &head, int val){
    node* temp = head;
    while(temp != NULL){
        if(temp->data==val){
            return true;
        }
        temp = temp->next;
    }
    return false;
}
void deleteAtFirst(node* &head){
   if(head==NULL){
      return;
   }
   node*temp=head;
   head= head->next;
   delete temp;
   return;
}
void deleteAtLast(node* &head){
   if(head==NULL){
      return;
   }
   node* temp = head;
   while(temp->next->next != NULL){
        temp = temp->next;
   }
   delete temp->next->next;
   temp->next = NULL;
}
void reverse(node* &head){
    // Initialize current, previous and next pointers
    node* current = head;
    node *prev = NULL, *next = NULL;

    while (current != NULL) {
        // Store next
        next = current->next;
        // Reverse current node's pointer
        current->next = prev;
        // Move pointers one position ahead.
        prev = current;
        current = next;
    }
    head = prev;
}
int main()
{
    node* head = NULL;
    system("cls");
    int target = 100;
    while(target != 0){
        cout<<"1.Insert Begin\n2.Insert End\n3.Delete Begin\n4.Delete End\n5.Display\n6.Search\n7.Reverse\n0.Quit\n";
        cout<<"Enter any option: ";
        cin>>target;
        switch (target)
        {
        case 1:
            int val;
            cout<<"Enter the value to be inserted at begin: ";
            cin>>val;
            insertAtHead(head,val);
            break;
        case 2:
            int val1;
            cout<<"Enter the value to be inserted at end: ";
            cin>>val1;
            insertAtTail(head,val1);
            break;
        case 3:
            deleteAtFirst(head);
            cout<<"Deleted first node. Now linked-list looks like: ";
            display(head);
            break;
        case 4:
            deleteAtLast(head);
            cout<<"Deleted last node. Now linked-list looks like: ";
            display(head);
            break;
        case 5:
            display(head);
            break;
        case 6:
            int item;
            cout<<"Enter the item to find it: ";
            cin>>item;
            if(searchNode(head,item)){
                cout<<"The value is present in the linked list"<<endl;
            }
            else{
                cout<<"The value is not present in the linked list"<<endl;
            }
            break;
        case 7:{
            cout<<"The reversed list is: ";
            reverse(head);
            display(head);
            break;
        }
        case 0:
            break;
        }
    }
    return 0;
}