#include <bits/stdc++.h> 
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std; 

int main()
{
    fast_io;
    int a,b,c;
    cin>>a>>b>>c;
    int x=sqrt((a*c)/b);
    int y=sqrt((b*c)/a);
    int z=sqrt((a*b)/c);
    cout<<4*(x+y+z)<<endl;
    return 0;
}