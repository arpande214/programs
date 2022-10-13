#include<iostream>
using namespace std;
int main(){

   int t,n;
   cin>>t;
   while(t--){
       cin>>n;
       int arr[n];
       for (int i = 0; i < n; i++)
       {
           cin>>arr[i];
       }
       int k = 0;
       for(int i = 0; i < n; i++){
           int v = 1+i+k;
           if(v == arr[i])
           k++;
       }
       cout<<k<<endl;
   }
return 0;
}