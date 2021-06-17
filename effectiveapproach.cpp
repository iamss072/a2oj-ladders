#include <bits/stdc++.h> 
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std; 

int main()
{
    fast_io;
    int n,val;
    cin>>n;
    unordered_map<int,int> hm;
    for(int i=1;i<=n;i++){
        cin>>val;
        hm[val]=i;
    }
    int m;
    cin>>m;
    ll aa=0,bb=0;
    while(m--){
        int q;
        cin>>q;
        int idx=hm[q];
        int b=n-idx+1;
        int a=idx;
        aa+=a;
        bb+=b;
    }
    cout<<aa<<" "<<bb<<endl;
    return 0;
}