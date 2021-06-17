#include <bits/stdc++.h> 
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std; 

int main()
{
    fast_io;
    int n,a,b;
    cin>>n;
    int csf=0;
    int ans=0;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        csf=csf-a+b;
        ans=max(ans,csf);
    }
    cout<<ans<<endl;
    return 0;
}