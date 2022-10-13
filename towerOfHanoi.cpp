#include<iostream>
using namespace std;
void TOH(int n, char src, char aux, char dest){
    if(n==0){
        return;
    }
    TOH(n-1,src,dest,aux);
    printf("Move %dth disk from %c to %c\n",n,src,dest);
    TOH(n-1,aux,src,dest);
}
int main()
{
    int n;
    cout<<"Enter the number of disks: ";
    cin>>n;
    TOH(n,'a','b','c');
    return 0;
}