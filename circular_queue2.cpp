#include <iostream>
#include <climits>
#define SIZE 5
using namespace std;

class Queue{
  private:
    int arr[SIZE];
    int front;
    int rear;
  public:
    Queue(){
        front = 0;
        rear = 0;
    }
    bool isFull(){
        return ((rear+1)%SIZE==front);
    }
    bool isEmpty(){
        return (front==rear);
    }
    void enque(int element){
        if(isFull()){
            cout<<"Queue is Full"<<endl;
            return;
        }
        rear = (rear+1)%SIZE;
        arr[rear]=element;
        cout<<"Pushed "<<element<<endl;
    }
    void deque(){
        if(isEmpty()){
            cout<<"Queue is already Empty"<<endl;
            return;
        }
        front = (front+1)%SIZE;
        cout<<"Popped "<<arr[front]<<endl;
        return;
    }
    int peek(){
        if(isEmpty()){
            cout<<"Queue is already empty. Nothing to display"<<endl;
            return INT_MIN;
        }
        return arr[(front+1)%SIZE];
    }
    void display(){
        if(isEmpty()){
            cout<<"Queue is already Empty"<<endl;
            return;
        }
        for(int i = front; i != rear; i=(i+1)%SIZE){
            cout<<arr[(i+1)%SIZE]<<" ";
        }
        cout<<endl;
        return;
    }
};

int main() {
    Queue q;
    cout<<q.peek()<<endl; //-2147483648
    cout<<q.isEmpty()<<endl; //1
    cout<<q.isFull()<<endl; //0
    q.deque(); //Queue is empty
    q.display(); ////Queue is empty
    q.enque(5);
    q.enque(6);
    q.enque(7);
    q.enque(8);
    q.enque(9);
    q.display(); //5 6 7 8 
    cout<<q.isFull()<<endl;//1
    q.deque(); //5
    q.deque(); //6
    cout<<q.peek()<<endl; //7
    q.deque(); //7
    cout<<q.peek()<<endl; //8
    q.enque(2); // 2
    q.enque(3); // 3
    q.enque(4); // 4
    q.enque(5); // Overflow
    q.display();
    q.deque();
    q.deque();
    q.display();
    q.enque(2); // 2
    q.enque(3); // 3
    q.enque(4);
    q.display();
    return 0;
}
