#include<iostream>
using namespace std;
long long int recursiveFib(int n,int a,int b){
	if(n==0){
		return a;
	}
	else if(n==1){
		return b;
	}
	return recursiveFib(n-1,b,a+b);
}
int main(){
	long long int n;
	cin>>n;
	cout<<recursiveFib(n-1,0,1)<<endl;
	return 0;
}
