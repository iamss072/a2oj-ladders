#include <bits/stdc++.h> 
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std; 

int main()
{
    fast_io;
    int n,m,v;
    cin>>n>>m;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>v;
        arr[i]=v;
    }
    sort(arr.begin(),arr.end());
    int ans=0;
    for(int i=0;i<m && arr[i]<0;i++){
        ans+=abs(arr[i]);
    }
    cout<<ans<<endl;
    return 0;
}