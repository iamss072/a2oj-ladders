#include <bits/stdc++.h> 
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std; 

int main()
{
    fast_io;
    int n;
    cin>>n;
    int x=0,y=0,z=0;
    while(n--){
        int x1,y1,z1;
        cin>>x1>>y1>>z1;
        x+=x1;
        y+=y1;
        z+=z1;
    }
    if(x==0 && y==0 && z==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}