#include <bits/stdc++.h> 
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std; 

int main()
{
    fast_io;
    int n,val;
    cin>>n;
    double d=0;
    for(int i=0;i<n;i++){
        cin>>val;
        d+=(double)val;
    }
    cout<<std::setprecision(8)<<(d/n)<<endl;
    return 0;
}