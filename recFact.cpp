#include<iostream>
using namespace std;
int recursiveFactorial(int n,int a){
	if(n==0 || n==1){
		return a;
	}
	return recursiveFactorial(n-1,n*a);
}
int main(){
	int n;
	cin>>n;
	cout<<recursiveFactorial(n,1)<<endl;
	return 0;
}
