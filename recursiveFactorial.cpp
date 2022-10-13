#include<iostream>
using namespace std;
int recursiveFactorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*recursiveFactorial(n-1);
}
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<recursiveFactorial(n);
    return 0;
}