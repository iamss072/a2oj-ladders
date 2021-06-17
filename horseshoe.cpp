#include <bits/stdc++.h> 
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std; 

int main()
{
    fast_io;
    unordered_set<int> hs;
    int val;
    for(int i=0;i<4;i++){
        cin>>val;
        hs.insert(val);
    }
    cout<<4-hs.size()<<endl;
    return 0;
}