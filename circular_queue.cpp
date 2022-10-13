#include<iostream>
#include <climits>
using namespace std;
#define n 5
int arr[n];
class Queue{
    private:

    int front;
    int rear;
    
    public:
    //Constructor
    Queue(){
        front = -1;
        rear = -1;
    }
    void enque(int);
    void deque();
    void display();
    bool isFull();
    bool isEmpty();

};
bool Queue::isFull(){
    if (front == 0 && rear == n - 1) {
      return true;
    }
    if (front == rear + 1) {
      return true;
    }
    return false;
}

bool Queue::isEmpty(){
    return front==-1;
}

void Queue::enque(int item){
    if(isFull()){
        cout<<"Queue is full"<<endl;
        return;
    }
    if(rear==-1&&front==-1){
        front=0;
        rear=0;
    }
    arr[rear]=item;
    cout<<"Inserted "<<item<<" in Queue"<<endl;
    rear = (rear+1)%n;
}

void Queue::deque(){
    if(isEmpty()){
        cout<<"Queue Underflow"<<endl;
        front=-1;
        rear=-1;
        return;
    }
    cout<<"Deleting "<<arr[front]<<" from the Queue"<<endl;
    front = (front+1)%n;
}

void Queue::display(){
    if(isEmpty()){
        cout<<"Queue Underflow"<<endl;
        return;
    }
    cout<<"Queue elements are as follows....\n";
    for (int i = front; i != rear; i = (i + 1) % n){
        cout<<arr[i]<<endl;
    }
}

int main()
{
    Queue queue;
    system("clear");
    int target = 100;
    while(target != 0){
        cout<<"1.Enque\n2.Deque\n3.Display\n4.isFull\n5.isEmpty\n0.Quit\n";
        cout<<"Enter any option: ";
        cin>>target;
        switch (target)
        {
        case 1:
            int element;
            cout<<"Enter the element to push into Queue: ";
            cin>>element;
            queue.enque(element);
            break;
        case 2:
            queue.deque();
            break;
        case 3:
            queue.display();
            break;
        case 4:
            if(queue.isFull()){
                cout<<"Queue is full"<<endl;
            }
            else{
                cout<<"We still have memory to insert elements"<<endl;
            }
            break;
        case 5:
            if(queue.isEmpty()){
                cout<<"Queue is empty"<<endl;
            }
            else{
                cout<<"Queue has some values into it"<<endl;
            }
            break;
        case 0:
            break;
        }
    }
    return 0;
}