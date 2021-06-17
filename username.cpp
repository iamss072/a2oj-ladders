#include <bits/stdc++.h> 
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std; 

int main()
{
    fast_io;
    int n,val;
    cin>>n;
    int mi=1e8;
    int ma=-1e8;
    int ans=0;
    for(int i=0;i<n;i++){
        cin>>val;
        if(i==0){
            mi=min(mi,val);
            ma=max(ma,val);
            continue;
        }
        if(val>ma || val<mi){
            ans++;
            mi=min(mi,val);
            ma=max(ma,val);
            // cout<<val<<" "<<mi<<" "<<ma<<endl;
        }
    }
    cout<<ans<<endl;
    return 0;
}