#include <bits/stdc++.h> 
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std; 

int main()
{
    fast_io;
    string s;
    string t;
    cin>>s;
    cin>>t;
    if(s.length()!=t.length()){
        cout<<"NO"<<endl;
        return 0;
    }
    int i=0;
    int j=s.length()-1;
    bool flag=true;
    while(i<s.length()){
        if(s[i]!=t[j]){
            flag=false;
            break;
        }
        i++;
        j--;
    }
    if(flag){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}