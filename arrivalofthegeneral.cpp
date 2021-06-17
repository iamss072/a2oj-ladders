#include <bits/stdc++.h> 
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std; 

int main()
{
    fast_io;
    int n,val;
    cin>>n;

    int max=-1;
    int min=101;
    int maxi=-1;
    int mini=-1;

    for(int i=0;i<n;i++){
        cin>>val;
        if(val>max){
            max=val;
            maxi=i;
        }
        if(val<=min){
            min=val;
            mini=i;
        }
    }
    if(maxi>mini){
        cout<<maxi+(n-1-mini)-1<<endl;
    }
    else{
        cout<<maxi+(n-1-mini)<<endl;
    }
    return 0;
}