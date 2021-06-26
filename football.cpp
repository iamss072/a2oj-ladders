#include <bits/stdc++.h> 
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std; 

int main()
{
    fast_io;
    int n;
    cin>>n;
    string s1="";
    string s2="";
    int one=0,two=0;
    while(n--){
        string s;
        cin>>s;
        // cout<<s.compare(s1)<<" "<<s.compare(s2)<<endl;
        if(s==s1){
            one++;
        }
        else if(s==s2){
            two++;
        }
        else{
            if(s1==""){
                s1=s;
                one++;
            }
            else{
                s2=s;
                two++;
            }
        }
    }
    // cout<<one<<" "<<two<<endl;
    if(one>two){
        cout<<s1<<endl;
    }
    else{
        cout<<s2<<endl;
    }
    return 0;
}