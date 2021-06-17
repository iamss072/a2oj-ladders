#include <bits/stdc++.h> 
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std; 

int main()
{
    fast_io;
    string s;
    cin>>s;
    int small=0;
    int caps=0;
    for(int i=0;i<s.length();i++){
        if(s[i]>='a' && s[i]<='z') small++;
        else caps++;
    }
    if(caps>small){
        for(int i=0;i<s.length();i++){
            if(islower(s[i])) s[i]=toupper(s[i]);
        }
    }
    else{
        for(int i=0;i<s.length();i++){
            if(isupper(s[i])) s[i]=tolower(s[i]);
        }
    }
    cout<<s<<endl;
    return 0;
}