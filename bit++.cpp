#include <bits/stdc++.h> 
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std; 

int main()
{
    fast_io;
    int t;
    cin>>t;
    int ans=0;
    while(t--){
        string s;
        cin>>s;
        if(s[1]=='+'){
            ans++;
        }
        else{
            ans--;
        }
    }
    cout<<ans<<endl;
    return 0;
}