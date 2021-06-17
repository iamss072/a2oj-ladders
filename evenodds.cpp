#include <bits/stdc++.h> 
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std; 

int main()
{
    fast_io;
    ll n,val;
    cin>>n>>val;
    if(n%2!=0){
        if(val<=n/2+1){
            cout<<val*2-1<<endl;
        }
        else{
            val-=n/2+1;
            cout<<val*2<<endl;
        }
    }
    else{
        if(val<=n/2){
            cout<<val*2-1<<endl;
        }
        else{
            val-=n/2;
            cout<<val*2<<endl;
        }
    }
    return 0;
}