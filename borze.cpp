#include <bits/stdc++.h> 
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std; 

int main()
{
    fast_io;
    string s;
    cin>>s;

    vector<int> ans;

    for(int i=0;i<s.length();i++){
        if(s[i]=='.') ans.push_back(0);
        if(s[i]=='-'){
            if(s[i+1]=='.') ans.push_back(1);
            else ans.push_back(2);
            i++;
        }
    }

    for(int i:ans) cout<<i;
    cout<<endl;

    return 0;
}