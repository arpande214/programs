#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int lamps,min_red,red_val,blue_val,money=0;
        cin>>lamps>>min_red>>red_val>>blue_val;
        if(red_val>blue_val){
            money = (min_red*red_val) + (lamps-min_red)*blue_val;
            cout<<money<<endl;
        }
        else{
            money = lamps*red_val;
            cout<<money<<endl;
        }
    }
    return 0;
}