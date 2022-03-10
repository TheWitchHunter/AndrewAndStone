#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
    ll t,n,x;
    cin>>t;
    for(ll i=0;i<t;i++){
        cin>>n;
        vector<ll>arr;
        for(ll j=0;j<n;j++){
            cin>>x;
            arr.push_back(x);
        }
        if(n<=2){
            cout<<-1<<endl;
        }
        if(n==3){
            if(arr[1]%2!=0){
                cout<<-1<<endl;
            }
            else{
                cout<<arr[1]/2<<endl;
            }
        }
        else{
        ll sum1=0;
        ll count=0;
       for(ll k=1;k<n-1;k++){
           sum1+=arr[k];
           if(arr[k]%2!=0){
               count+=1;
                sum1-=1;
           }
       }
       if(sum1>0){
           cout<<(sum1/2)+count<<endl;
       }
       else{
           cout<<-1<<endl;
       }
        }
       
    }
    return 0;
}























































































