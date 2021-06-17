#include <bits/stdc++.h> 
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std; 

int main()
{
    fast_io;
    string s1,s2;
    cin>>s1;
    cin>>s2;
    string s(s1);

    for(int i=0;i<s1.length();i++){
        if(s1[i]!=s2[i]) s[i]='1';
        else s[i]='0';
    }
    cout<<s<<endl;
    return 0;
}