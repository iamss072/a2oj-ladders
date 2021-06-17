#include <bits/stdc++.h> 
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std; 

int main()
{
    fast_io;
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.length()<=10){
            cout<<s<<endl;
            continue;
        }
        cout<<s[0];
        cout<<s.length()-2;
        cout<<s[s.length()-1];
        cout<<endl;
    }
    
    return 0;
}