#include<iostream>
using namespace std;
int recursiveFibonacci(int n){
    if(n<=1){
        return n;
    }
    return recursiveFibonacci(n-1)+recursiveFibonacci(n-2);
}
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<recursiveFibonacci(n);

    // for (int i = 0; i <= n; i++)
    // {
    //     cout<<recursiveFibonacci(i)<<" ";
    // }
    
    return 0;
}