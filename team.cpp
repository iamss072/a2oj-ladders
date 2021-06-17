#include <bits/stdc++.h> 
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std; 

int main()
{
    fast_io;
    int t;
    cin>>t;
    int ans=0;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int tans=0;
        if(a==1) tans++;
        if(b==1) tans++;
        if(c==1) tans++;
        if(tans>1) ans++;
    }
    cout<<ans<<endl;
    return 0;
}