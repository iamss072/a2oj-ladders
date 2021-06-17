#include <bits/stdc++.h> 
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std; 

int main()
{
    fast_io;
    string s1,s2,s3;
    cin>>s1;
    cin>>s2;
    cin>>s3;
    vector<int> l1(26,0);
    vector<int> l2(26,0);
    vector<int> l3(26,0);

    for(int i=0;i<s1.length();i++){
        l1[s1[i]-'A']++;
        // cout<<(int)s1[i]<<'|'<<s1[i]-'A'<<" ";
    }
    // for(int i=0;i<26;i++){
    //     cout<<l1[i]<<" ";
    // }
    // cout<<endl;
    for(int i=0;i<s2.length();i++){
        l2[s2[i]-'A']++;
    }
    for(int i=0;i<s3.length();i++){
        l3[s3[i]-'A']++;
    }
    bool flag=true;
    for(int i=0;i<26;i++){
        if(l1[i]+l2[i]!=l3[i]){
            flag=false;
            break;
        }
        // cout<<('A'+i)<<" "<<l1[i]<<" "<<l2[i]<<" "<<l3[i]<<endl;
    }
    if(flag){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}