#include <bits/stdc++.h> 
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std; 

int main()
{
    fast_io;
    int k,v;
    string str;
    cin>>str;
    string ans;
    for(int i=0;i<str.length();){
        if(str.substr(i,3)=="WUB"){
            i+=3;
            if(ans.length()!=0) ans+=" ";
        }
        else{
            ans+=str[i];
            i++;
        }
    }
    cout<<ans<<endl;
    return 0;
}