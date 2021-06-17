#include <bits/stdc++.h> 
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std; 

int main()
{
    fast_io;
    int n,val;
    cin>>n;
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>val;
        sum+=val;
    }
    int ans=0;
    for(int i=1;i<=5;i++){
        if((sum+i)%(n+1)!=1) ans++;
    }
    cout<<ans<<endl;
    return 0;
}