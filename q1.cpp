#include<bits/stdc++.h>
using namespace std;
#define len 100
class stack1{
	int top;
	public:
		stack1(){top=-1;}
	int stack[len]={0};
	int isempty();
	int isfull();
	void push(int);
	void pop();
	int peek();
	void display();	
};
int stack1::isempty(){
	if(top==-1)
	return 1;
	else
	return 0;
}
int stack1::isfull(){
	if(top==len-1)
	return 1;
	else
	return 0;
}
int stack1::peek(){
	if(top==-1)
		return 0;
	int x=stack[top];
	cout<<"top element is "<<x<<endl;
	return 1;
}
void stack1::push(int item){
	top++;
	stack[top]=item;
	return;
}
void stack1::pop(){
	int x=stack[top];
	top--;
	cout<<"deleted item = "<<x<<endl;
	return;
}
void stack1::display(){
	cout<<"stack is = ";
	for(int i=0;i<=top;i++)
	cout<<stack[i]<<" ";
	cout<<endl;
	return;
}
int main(){
	stack1 s;
	cout<<"Menu driven program : \n";
	while(1){
	int n,a;
	cout<<"Press 1 for stack empty check, 2 for stack full check, 3 to peek, 4 to push, 5 to pop, 6 to display : ";
	cin>>n;
	switch(n){
	case 1: if(s.isempty())
			cout<<"stack is empty\n";
			else
			cout<<"stack is not empty\n";
			break;
	case 2: if(s.isfull())
			cout<<"stack is full\n";
			else
			cout<<"stack is not full\n";
			break;
	case 3: if(!s.isempty())
			s.peek();
			else
			cout<<"stack is empty\n";
			break;
	case 4: if(!s.isfull()){
			cout<<"enter element to be pushed : ";
			cin>>a;
			s.push(a);
			}
			else
			cout<<"stack is full\n";
			break;
	case 5: if(!s.isempty()){
			s.pop();
			}
			else
			cout<<"stack is empty\n";
			break;
	case 6: if(!s.isempty()){
			s.display();
			}
			else
			cout<<"stack is empty\n";
			break;
	default: cout<<"option invalid";
			return 0;	
	}
	}
}
