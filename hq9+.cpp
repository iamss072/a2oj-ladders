#include <bits/stdc++.h> 
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std; 

int main()
{
    fast_io;
    string s;
    cin>>s;
    bool flag=false;
    for(int i=0;i<s.length();i++){
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9' ){
            flag=true;
            break;
        }
    }
    if(flag){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}