#include <bits/stdc++.h> 
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std; 

int main()
{
    fast_io;
    int n,x;
    cin>>n;
    vector<int> arr(7,0);
    for(int i=0;i<7;i++){
        cin>>x;
        arr[i]=x;
    }
    int j=0;
    while(n>0){
        j%=7;
        n-=arr[j++];
    }
    cout<<j<<endl;
    return 0;
}