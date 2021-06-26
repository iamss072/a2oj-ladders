#include <bits/stdc++.h> 
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std; 

int main()
{
    fast_io;
    int k;
    cin>>k;
    string s;
    cin>>s;
    vector<int> arr(26,0);
    for(int i=0;i<s.length();i++){
        arr[s[i]-'a']++;
    }
    string tans;
    for(int i=0;i<26;i++){
        if(arr[i]%k!=0){
            cout<<"-1"<<endl;
            return 0;
        }
        else if(arr[i]>0){
            for(int j=0;j<arr[i]/k;j++){
                tans+='a'+i;
            }
            // tans+='a'+i;
        }
    }
    string ans;
    for(int i=0;i<k;i++){
        ans+=tans;
    }
    cout<<ans<<endl;
    return 0;
}