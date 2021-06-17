#include <bits/stdc++.h> 
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std; 

int main()
{
    fast_io;
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    if(a==1 || b==1 || c==1 || d==1){
        cout<<e<<endl;
        return 0;
    }
    int count=0;
    for(int i=1;i<=e;i++){
        if(i%a==0){
            count++;
            continue;
        }
        if(i%b==0){
            count++;
            continue;
        }
        if(i%c==0){
            count++;
            continue;
        }
        if(i%d==0){
            count++;
            continue;
        }
    }
    cout<<count<<endl;
    return 0;
}