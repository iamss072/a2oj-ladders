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
    int ans=0;

    for(int i=0;i<s1.length();i++){
        char c1=tolower(s1[i]);
        char c2=tolower(s2[i]);

        if(c1<c2){
            ans=-1;
            break;
        }
        if(c1>c2){
            ans=1;
            break;
        }
    }
    cout<<ans<<endl;
    
    return 0;
}