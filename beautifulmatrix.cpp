#include <bits/stdc++.h> 
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std; 

int main()
{
    fast_io;
    int r,c,val;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>val;
            if(val==1){
                r=i;
                c=j;
            }
        }
    }
    cout<<abs(r-2)+abs(c-2)<<endl;
    return 0;
}