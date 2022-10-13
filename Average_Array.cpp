#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int arr[n];
        int temp = 0;
        for(int i = 0; i < n; i++){
            if(i==0){
                arr[i] = x-temp;
                temp++;
            }
            else{
                arr[i] = x+temp;
                arr[i+1] = x-temp;
                i++;
            }
        }
        for(int x: arr){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}