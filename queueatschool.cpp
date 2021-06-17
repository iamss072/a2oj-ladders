#include <bits/stdc++.h> 
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std; 
void swap(int i,int j,string& s){
    char ch=s[i];
    s[i]=s[j];
    s[j]=ch;
}
int main()
{
    fast_io;
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;

    while(k--){
        
        for (int i = 1; i < n; ++i)
        {
            if (s[i] == 'G' && s[i-1] == 'B')
            {
                s[i] = 'B';
                s[i-1] = 'G';
                ++i;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}