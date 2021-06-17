#include <bits/stdc++.h> 
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std; 

int main()
{
    fast_io;
    ll n,val;
    cin>>n;
    unordered_map<int,int> hm;
    int m=1e9+7;
    int idx=-1;
    for(int i=0;i<n;i++){
        cin>>val;
        hm[val]++;
        if(m>val) {
            m=val;
            idx=i+1;
        }
    }
    if(hm[m]>1){
        cout<<"Still Rozdil"<<endl;
    }
    else{
        cout<<idx<<endl;
    }
    return 0;
}