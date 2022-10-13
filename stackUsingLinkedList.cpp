#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
    
};

class Stack
{
    node* TOP;
    public:
    Stack()
    {TOP=NULL;}
    void push(int);
    void display();
    void pop();
    int peek();

};

int main()
{
    Stack s;
    int option,val;
    do
    {
        printf("\n1. INSERT");
        printf("\n2. DISPLAY");
        printf("\n3. DELETE");
        printf("\n4. EXIT");
        printf("\n\nEnter your option: ");
        scanf("%d",&option);
        switch(option)
        {
            case 1:
                cout<<"Enter value: ";
                cin>>val;
                s.push(val);
                break;
            case 2:
                s.display();
                break;
            case 3:
                s.pop();
                break;
        }
    }while(option!=4);
}

void Stack:: push(int num)
{
    node *curr=new node;
    curr->data=num;
    curr->next=NULL;
    if(TOP==NULL)
    {
        TOP=curr;
        return;
    }
    curr->next=TOP;
    TOP=curr;
    return;
}

void Stack::display()
{
    node *ptr=TOP;
    if(ptr==NULL)
    {
        cout<<"\n"<<"Stack is empty";
        return;
    }
    printf("Elements in stack are: ");
    while(ptr!=NULL)
    {
        cout<<"\n"<<ptr->data;
        ptr=ptr->next;
    }

}

void Stack:: pop()
{
    node *ptr=TOP;
    if(ptr==NULL)
    {
        cout<<"Stack underflow";
        return;
    }
    int x=TOP->data;
    TOP=TOP->next;
    free(ptr);
    cout<<x<<"is popped";
    return;
}

int Stack:: peek()
{
    if(TOP==NULL)
    {
        cout<<"Stack is empty";
        return;
    }
    return TOP->data;

}