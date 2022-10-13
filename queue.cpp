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
    int peek();
    bool isFull();
    bool isEmpty();

};
bool Queue::isFull(){
    return rear==(n-1);
}

bool Queue::isEmpty(){
    return front==rear;
}

void Queue::enque(int item){
    if(isFull()){
        cout<<"Queue is full"<<endl;
        return;
    }
    if(rear==-1){
        front++;
    }
    cout<<"Inserted "<<item<<" in Queue"<<endl;
    arr[++rear] = item;
}

void Queue::deque(){
    if(isEmpty()){
        cout<<"Queue Underflow"<<endl;
        return;
    }
    cout<<"Deleting "<<peek()<<" from the Queue"<<endl;
    ++front;
}

int Queue::peek(){
    if(isEmpty()){
        cout<<"Queue Underflow"<<endl;
        return INT_MIN;
    }
    return arr[front];
}

void Queue::display(){
    if(isEmpty()){
        cout<<"Queue Underflow"<<endl;
        return;
    }
    cout<<"Queue elements are as follows....\n";
    for(int i = front; i <= rear; i++){
        cout<<arr[i]<<endl;
    }
}

int main()
{
    Queue queue;
    system("clear");
    int target = 100;
    while(target != 0){
        cout<<"1.Enque\n2.Deque\n3.Display\n4.Peek\n5.isFull\n6.isEmpty\n0.Quit\n";
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
            cout<<"The peek value is = "<<queue.peek()<<endl;
            break;
        case 5:
            if(queue.isFull()){
                cout<<"Queue is full"<<endl;
            }
            else{
                cout<<"We still have memory to insert elements"<<endl;
            }
            break;
        case 6:
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