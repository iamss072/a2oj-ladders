#include <bits/stdc++.h> 
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std; 

int main()
{
    fast_io;
    int n;
    cin>>n;
    string s;
    cin>>s;
    
    int i=0;
    int ans=0;
    while(i<n){
        char c=s[i];
        int count=0;
        while(i<n && s[i]==c){
            i++;
            count++;
        }
        ans+=count-1;
    }
    cout<<ans<<endl;
    return 0;
}