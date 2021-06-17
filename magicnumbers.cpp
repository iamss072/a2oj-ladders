#include <bits/stdc++.h> 
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std; 

int main()
{
    fast_io;
    string s;
    cin>>s;
    vector<bool> arr(s.length()+1,false);
    arr[0]=true;
    bool flag=true;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1'){
            continue;
        }
        else if(s[i]=='4'){
            if(i-1>=0 && s[i-1]=='1'){
                // cout<<"YES"<<endl;
                continue;
            }
            else if(i-2>=0 && s[i-1]=='4' && s[i-2]=='1'){
                continue;
            }
            else{
                // cout<<i<<"Not 4"<<endl;
                flag=false;
                break;
            }
        }
        else{
            // cout<<i<<endl;
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}