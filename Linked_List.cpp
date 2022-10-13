#include<iostream>
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
void insertAtTail(node* head, int val){
    if(head==NULL){
        insertAtHead(head,val);
        return;
    }
    while(head->next != NULL){
        head = head->next;
    }
    node* newnode = new node(val);
    head->next = newnode;
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
        cout<<"No elements present in the list"<<endl;
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
   //Condition for single node
   if(head->next==NULL){
        delete head;
        head = NULL;
        return;
   }
   node* temp = head;
   while(temp->next->next != NULL){
        temp = temp->next;
   }
   delete temp->next->next;
   temp->next = NULL;
}
node* reveseLinkedList(node* head){
    //Recursive Method
    if(head ==  NULL or head->next == NULL){
        return head;
    }
    
    node* smallHead = reveseLinkedList(head->next);
    head->next->next = head;
    head->next = NULL;
    return smallHead;
}
int main()
{
    node* head = NULL;
    insertAtHead(head,3);
    insertAtTail(head,5);
    insertAtHead(head,1);
    insertAtHead(head,10);
    insertAtTail(head,7);
    display(head);
    deleteAtFirst(head);
    deleteAtLast(head);
    display(head);
    head = reveseLinkedList(head);
    display(head);
    insertAtTail(head,7);
    display(head);
    return 0;
}