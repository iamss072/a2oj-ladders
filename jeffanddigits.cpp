#include <bits/stdc++.h> 
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std; 

int main()
{
    fast_io;
    int  n,val;
    cin>>n;
    int fc=0;
    int zc=0;
    for(int i=0;i<n;i++){
        cin>>val;
        if(val==0) zc++;
        else fc++;
    }
    int count=(fc/9)*9;
    if(zc==0){
        cout<<"-1"<<endl;
        return 0;
    }
    if(count==0){
        cout<<"0"<<endl;
        return 0;
    }
    for(int i=0;i<count;i++){
        cout<<"5";
    }
    for(int i=0;i<zc;i++){
        cout<<"0";
    }
    cout<<endl;
    return 0;
}