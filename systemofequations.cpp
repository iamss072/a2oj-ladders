#include <bits/stdc++.h> 
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std; 

int main()
{
    fast_io;
    int n,m;
    cin>>n>>m;
    int ans=0;
    for(int b=0;b<=n;b++){
        int t=n-b;
        int a=sqrt(t);
        if(a*a!=t) continue;
        if(a+b*b==m) ans++;
    }
    cout<<ans<<endl;
    return 0;
}