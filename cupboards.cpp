#include <bits/stdc++.h> 
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std; 

int main()
{
    fast_io;
    int t;
    int l0=0;
    int r0=0;
    int l1=0;
    int r1=0;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a==0) l0++;
        else l1++;

        if(b==0) r0++;
        else r1++;
    }
    cout<<min(l0,l1)+min(r0,r1)<<endl;
    return 0;
}