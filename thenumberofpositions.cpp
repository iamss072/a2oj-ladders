#include <bits/stdc++.h> 
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std; 

int main()
{
    fast_io;
    int n,a,b;
    cin>>n>>a>>b;
    int ans=n-max(a+1,n-b)+1;
    cout<<ans<<endl;
    return 0;
}