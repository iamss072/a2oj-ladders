#include <bits/stdc++.h> 
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std; 

int main()
{
    fast_io;
    string s;
    cin>>s;
    int one=0,two=0,three=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1'){
            one++;
        }
        else if(s[i]=='2'){
            two++;
        }
        else if(s[i]=='3'){
            three++;
        }
    }
    // cout<<one<<" "<<two<<" "<<
    string ans;
    for(int i=0;i<one;i++){
        if(ans.length()!=0){
            ans.push_back('+');
        }
        ans.push_back('1');
    }
    for(int i=0;i<two;i++){
        if(ans.length()!=0){
            ans.push_back('+');
        }
        ans.push_back('2');
    }
    for(int i=0;i<three;i++){
        if(ans.length()!=0){
            ans.push_back('+');
        }
        ans.push_back('3');
    }
    cout<<ans<<endl;
    return 0;
}