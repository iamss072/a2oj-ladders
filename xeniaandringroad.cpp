#include <bits/stdc++.h> 
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std; 

int main()
{
    fast_io;
    ll  n,m,t;
    cin>>n>>m;
    ll ch=1;
    ll ans=0;
    for(ll i=0;i<m;i++){
        cin>>t;
        // cout<<ch<<" "<<t<<endl;
        if(t>=ch){
            // cout<<"first: "<<t-ch<<endl;
            ans+=t-ch;
            ch=t;
        }
        else{
            ans+=n-ch+t;
            ch=t;
        }
    }
    cout<<ans<<endl;
    return 0;
}